#include<stdio.h>
int Exists_4(int A,int B)
{
    while(A)
    {
        if(A%10==4)
            return 1;
        A/=10;
    }
    while(B)
    {
        if(B%10==4)
            return 1;
        B/=10;
    }
    return 0;
}
int main(void)
{
    int T,N,A,B,i,j,k;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        if(N%2==0)
        {
            A=B=N/2;
        }
        else
        {
            A=(N-1)/2;
            B=A+1;
        }
            while((Exists_4(A,B))&&A>0&&B>0)
            {
                A--;
                B++;
            }
            printf("%d %d",A,B);
        
    }
    return 0;
}