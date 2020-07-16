#include<stdio.h>
#include<stdlib.h>

int main(){
    long int num,a,b;
    int cifre[10];
    int duecifre[10];
    int i,j,k,l, test,last=0;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%ld",&num);
        l=0;
        for(k=0;k<10;k++){
            duecifre[k]=-1;
            cifre[k]=-1;
        }
        while(num/10 != 0){
            cifre[l++]=num%10;
            num=num/10;
        }
        cifre[l++]=num;
        last=0;
        for(k=0;k<l;k++){
            if(cifre[k]==4){
                cifre[k]=3;
                duecifre[k]=1;
                last=k;
            }
            else{
                duecifre[k]=0;
            }
        }
        printf("\n");
        printf("case #%d: ",i+1);
        for(k=l-1;k>=0;k--){
            printf("%d",cifre[k]);
        }
        printf(" ");
        for(k=last;k>=0;k--){
            printf("%d",duecifre[k]);
        }
        printf("\n");


    }
}