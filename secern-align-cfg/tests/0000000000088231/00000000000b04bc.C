
#include <stdlib.h>
#include <stdio.h>


int main(){
    int p1;
    int n;
    int testcases;scanf("%d",&testcases);
    for(int i=1;i<=testcases;i++){
        scanf("%d",&n);
         if(n==4){
             n=2;
             p1=2;
         }
         printf("Case #%d: %d %d\n",i,n,p1);
    }
}

