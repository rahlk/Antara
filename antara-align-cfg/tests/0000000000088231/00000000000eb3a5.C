#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define max 100

int main(){
    long int num,a,b;
    char nume[max];
    int cifre[max];
    int duecifre[max];
    int i,j,k,l, test,last=0;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%s",nume);
        l=0;
        for(k=0;k<max;k++){
            duecifre[k]=-1;
            cifre[k]=-1;
        }
        l=strlen(nume);
        for(k=0;k<l;k++){
            cifre[k]=nume[k] - '0';
            
        }
       /* while(num/10 != 0){
            cifre[l++]=num%10;
            num=num/10;
        }
        cifre[l++]=num;
        */
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
        for(k=0;k<l;k++){
            printf("%d",cifre[k]);
        }
        printf(" ");
        k=0;
        while(duecifre[k]==0){k++;}
        for(j=k;j<l;j++){
            printf("%d",duecifre[j]);
        }
        printf("\n");


    }
}