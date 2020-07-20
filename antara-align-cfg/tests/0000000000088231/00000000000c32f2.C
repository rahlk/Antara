#include<stdio.h>

void main(){
    int t,n,i;
    scanf("%d",&t);
    for (i=0;i<t;i++){
        scanf("%d",&n);
        printf("Case #%d: %d %d",i+1,n-1,1);
    }
}