#include<stdio.h>
int main(){
    int n,k;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&k);
        int m=2;
        k=k-m;
        printf("%d %d",k,m);
    }
}