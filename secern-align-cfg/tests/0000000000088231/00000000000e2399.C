#include<stdio.h>
int main()
{
    int N,T,A,B,p,i,q,r;
    scanf("%d",&T);
    for(T=1;T<=100;T++)
    {
        A=p;
        B=q;
        if(A+B==N)
        {
            while(A!=0)
            {
                r=A%10;
                if(r==4)
                {
                    break;
                }
                A=A/10;
            }
            while(B!=0)
            {
                r=B%10;
                if(r==4)
                {
                    break;
                }
                B=B/10;
            }
        }
        for(i=1;i<=100;i++)
            printf("Case #%d: %d %d",i,A,B);
    }
}