
#include <stdio.h>

int main()
{
int T,N,A,B,C,i,j;
scanf("%d",&T);
for(i=0;i<T;i++){
    scanf("%d",&N);
    j=1;
    A=0;
    B=0;
    while(N){
        C = N%10;
        if(C==4){
            A=A+(C/2)*j;
            B=B+(C/2)*j;
        }else{
            A=A+C*j;
        }
        N=N/10;
        j*=10;
    }
    printf("Case #%d: %d %d\n",i+1,A,B);
    fflush(stdout);
}
return 0;
}
