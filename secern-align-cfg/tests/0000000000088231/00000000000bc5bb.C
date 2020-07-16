#include<stdio.h>
void main(){
    int n,i,coins[10],n1=1,n2;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&coins[i]);
    }
    for(i=0;i<n;i++){
        n2=coins[i];
        while(n2){
        n1=n1+10*(i-1);
        n2=coins[i]-n1;
        }
        printf("\nCase #%d: %d %d",i,n1,n2);
    }
}