/*
  Copyright 2015 Google LLC All rights reserved.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at:

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

/*
   american fuzzy lop - LLVM-mode instrumentation pass
   ---------------------------------------------------

   Written by Laszlo Szekeres <lszekeres@google.com> and
              Michal Zalewski <lcamtuf@google.com>

   LLVM integration design comes from Laszlo Szekeres. C bits copied-and-pasted
   from afl-as.c are Michal's fault.

   This library is plugged into LLVM when invoking clang through afl-clang-fast.
   It tells the compiler to add code roughly equivalent to the bits discussed
   in ../afl-as.h.
*/

#define AFL_LLVM_PASS

#include "../config.h"
#include "../debug.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "llvm/IR/Module.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Constants.h"
#include "llvm/Support/Debug.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"
using namespace llvm;
using namespace std;

namespace {

  class AFLCoverage : public ModulePass {

    public:

      static char ID;
      AFLCoverage() : ModulePass(ID) { }

      bool runOnModule(Module &M) override;

      // StringRef getPassName() const override {
      //  return "American Fuzzy Lop Instrumentation";
      // }

  };

}


char AFLCoverage::ID = 0;

bool AFLCoverage::runOnModule(Module &M) {

  LLVMContext &C = M.getContext();

  IntegerType *Int8Ty  = IntegerType::getInt8Ty(C);
  IntegerType *Int32Ty = IntegerType::getInt32Ty(C);

  string internals_prefix = "__"; //extern__";
  string extern_func_prefix = "__extern__"; //extern__";

  std::vector<Type*> paramTypes = {Type::getInt8Ty(C), Type::getInt8Ty(C)};
  Type *retType = Type::getVoidTy(C);
  FunctionType *preableType = FunctionType::get(retType, false);
  FunctionType *logFuncType = FunctionType::get(retType, paramTypes, false);
  FunctionCallee preambleFunction = M.getOrInsertFunction("__extern__print_preamble", preableType);
  FunctionCallee postambleFunction = M.getOrInsertFunction("__extern__print_postamble", preableType);
  FunctionCallee logCallGraphEdge = M.getOrInsertFunction("__extern__print_callgraph_edge", logFuncType);

  /* Instrument all the things! */

  for (auto &F : M) {
    // errs().write_escaped(F.getName()) << '\n';     
    
    const StringRef callerName = F.getName();
    if (callerName.startswith(extern_func_prefix)) {
          continue;
    }    
    
    if (callerName.startswith(internals_prefix)) {
          continue;
    }    

    if (F.isIntrinsic()) {
          continue;
    }    

    if (!F.hasExactDefinition()) {
          continue;
    }    

    if (F.getName() == "main") {
      // print preamble and here
      inst_iterator BI = inst_begin(F);
      IRBuilder<> Preamble(&*(BI));
      Preamble.CreateCall(preambleFunction, {});
    }

    for (auto &B : F){ 
      for (auto &I :B) {
        IRBuilder<> builder(&I);
        Value *caller_strPointer = builder.CreateGlobalStringPtr(callerName);
        /* Check to see if we have reached a 'call' instruction */
        if (auto *CallInstr = dyn_cast<CallInst>(&(I))) {
          Function *called_func = CallInstr->getCalledFunction();
          if (!called_func || called_func->getName().startswith(extern_func_prefix) || called_func->getName().startswith(internals_prefix) || called_func->isIntrinsic() || !F.hasExactDefinition()) {
            continue;
          } else {
            const StringRef calledName = called_func->getName();
            BasicBlock::iterator insert_pt_above = builder.GetInsertPoint();
            builder.SetInsertPoint(&B, insert_pt_above);
            Value *called_strPointer = builder.CreateGlobalStringPtr(calledName);
            Value* args[] = {caller_strPointer, called_strPointer};
            builder.CreateCall(logCallGraphEdge, args);
          }
        }
      }
    }
  }
  return true;
}


static void registerAFLPass(const PassManagerBuilder &,
                            legacy::PassManagerBase &PM) {

  PM.add(new AFLCoverage());

}


static RegisterStandardPasses RegisterAFLPass(
    PassManagerBuilder::EP_ModuleOptimizerEarly, registerAFLPass);

static RegisterStandardPasses RegisterAFLPass0(
    PassManagerBuilder::EP_EnabledOnOptLevel0, registerAFLPass);
