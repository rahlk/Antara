#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    int x,y,N;
    char P;
     printf("Enter the number of of test cases:\n");
    scanf("%d",&T);
    for(1<=T;T<=100;T++)
    {
        if(T==N)
        T=N;
        else
        {
            N=T;
        }
    }
    for(2<=N;N<=10;N++)
    {
        if(N>=1)
        X=2N-2;
        else
        {
            Y=2N-2;
        }
    }
    for(2<=N;N<=1000;N++)
    {
        if(N>=2)
        P=N-1;
        P=X;
        X=Y;
        Y=P;
        
        else
        {
            Y=P;
            P=X;
            X=Y;
        }
    }
    return(0);
}