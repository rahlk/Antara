FROM ubuntu:18.04

MAINTAINER helpacksi <oo.helpacksi@gmail.com>

#----- Install packages -----
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    ocaml opam m4\
    xz-utils \
    vim \
    curl \
    openjdk-8-jdk       \
    git maven bc        \
    openssh-server wget \
    build-essential     \
    python3.6 python3-pip && \
    apt-get clean  && \
    rm -rf /var/lib/apt/lists/*


#----- INSTALL CLANG -----
RUN curl -SL https://github.com/llvm/llvm-project/releases/download/llvmorg-10.0.0/clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04.tar.xz | tar -xJC . && \
    mv clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04 /LLVM_ROOT 

#----- INSTALL PYTHON DEPENDENCIES-----
RUN pip3 install numpy scipy pandas networkx tqdm matplotlib graphviz pydot scikit-learn  

# ----- This for debug only -----
RUN wget -O ~/.vimrc https://gist.githubusercontent.com/rahlk/78d3d8f188a099dfd5114c35176e391d/raw/ed47d4fee79b5e177cb008abb319ebe4b542fc75/.vimrc

#----- Set environment variable -----
ENV PATH=/LLVM_ROOT/bin:/root/.opam/system/bin:$PATH
ENV LD_LIBRARY_PATH=/LLVM_ROOT/lib
ENV PYTHONDONTWRITEBYTECODE=1
ENV PYTHONIOENCODING=utf8
ENV COMPILER_ROOT=/workspace/secern/secern-clang-cc/
ENV PROGRAMS_ROOT=/workspace/secern/programs
ENV GRAPH_ALIGN_ROOT=/workspace/secern/programs

# ----- Update git credentials -----
RUN git config --global user.name "rahlk" && \
    git config --global user.email "i.m.ralk@gmail.com"

CMD ["sh -c bash"]

