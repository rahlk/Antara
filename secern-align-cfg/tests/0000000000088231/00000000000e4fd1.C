#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int j=0;j<test;j++){
    long int N;
    int i=0;
    scanf("%ld",&N);
    int nDigits = floor(log10(abs(N))) + 1;
    char mystring[nDigits],A[nDigits],B[nDigits];
    sprintf(mystring,"%ld",N);
    for(i=0;i<nDigits;i++){
        if(mystring[i]=='4'){
            A[i]='3';}
        else{
            A[i]=mystring[i];}}
    for(i=0;i<nDigits;i++){
        B[i]=mystring[i]-A[i];}
    for(i=0;i<nDigits;i++){
        printf("%c",A[i]);}
    printf("  ");
    for(i=0;i<nDigits;i++){
        printf("%d",B[i]);}
    printf(""\n");
    }
    return 0;}