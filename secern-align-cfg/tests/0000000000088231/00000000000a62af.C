#include<stdio.h>
#include<math.h>

main() {
    int varCnt, varDig;
    unsigned long long varNum, varTemp, varOut=0;
    
    scanf("%d", &varCnt);
    for(int i=0; i<varCnt; i++) {
        scanf("%llu", &varNum);
        
        varTemp=varNum;
        for(int j=0; varTemp%10!=0; j++) {
            varDig=varTemp%10;
            
            if(varDig==4) {
                varOut=varOut+pow(10,j);
            }
            
            varTemp=varTemp/10;
        }
        
        printf("Case #%d: %llu %llu", i+1, varOut, varNum-varOut);
    }
}