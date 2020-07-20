#include<stdio.h>
int main ()
{
    int i,T,N,A,B;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        A=N/2;
        B=N/2;
        if(A==4 || B==4)break;
        else if(N==8){
        A=(N-1);
        B=1;
        printf("Case#%d: %d %d\n",i,A,B);
        }
        else{
               printf("Case#%d: %d %d\n",i,A,B);
        }


    }
    return 0;
}
