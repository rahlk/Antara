#include<stdio.h>
int main(){
    int T,temp,N,A=0,B,i,j=0;
    scanf("%d",T);
    for(i = 1 ; i <= T ; i++){
        scanf("%d",&N);
        temp = N;
        while(temp/10){j++;}
        A=temp-35;
        B=35;
        printf("Case #1: %d %d\n",A,B);
    }
    
    return 0;
}