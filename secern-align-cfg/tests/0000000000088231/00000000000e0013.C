#include<stdio.h>
int main()
{
    int N,T,A,B,p,q;
    scanf("%d",&T);
    for(T=1;T<=100;T++)
    {
        A=p;
        B=q;
        if(A+B==N)
        {
            while(A!=0)
            {
                A=A/2;
            }
            while(B!=0)
            {
                B=B/2;
            }
        }
        for(i=1;i<=100;i++)
            printf("Case #%d: %d %d",i,A,B)
    }
}