#include<stdio.h>

void main(){
    int T[100],x,A,B,tempA,tempB,temp_var,temp,temp_varB;
    printf("Give T value");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("Give N value");
        scanf("%d",&T[i]);
        temp=T[i];
        for(A=0;A<T[i];A++){
            tempA=A;
            while(A>=1){
                label: temp_var=A%10;
                if(A==4)
                    continue;
                else{
                    A=A%10;
                    goto label;
                }
                B=temp-A;
                tempB=B;
                while(B>=1){
                    labelb: temp_varB=B%10;
                    if(B==4)
                        continue;
                    else{
                        B=B%10;
                        goto labelb;
                    }
                }
                printf("%d\t%d\n",tempA,tempB);
        }
    }
}