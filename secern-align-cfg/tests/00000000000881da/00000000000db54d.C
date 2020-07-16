#include<stdio.h>

int main(){
    int T,N,i,j;
    char p[50000];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&N);
        scanf("%s",&p);
        for(j=0;j<2*N-2;j++){
            if(p[j]=='E'){
                p[j]='S';
            }else{
                p[j]='E';
            }        
        }
        printf("case #%d: %s\n",i+1,p);
    }
    return 0;
}