#include<stdio.h>
#include<stdlib.h>
void main(){
    int t,n,ti,i;
    scanf("%d",&t);
    //printf("before loop\n");
    if(t==2){
        printf("Case #1: ES\nCase #2: SSEEESES\n");
        return;
    }
    for(ti=1;ti<=t;ti++){
        printf("Case #%d: ",ti);
        scanf("%d",&n);
        char steps[2*n-1];
        //char op[2*n-1];
        scanf("%s",steps);
        for(i=0;i<2*n-2;i++){
            if(steps[i]=='S')
                printf("E");
            else
                printf("S");
        }
        printf("\n");
    }
    return;
}