#include<stdio.h>

int T,N,i,j,A,B,k=0;

int main()
{
    printf("enter the Number");
    scanf("%d",&N);
    
    
    
    for(i=0;i<=N;i++)
    {
        for(j=0;j<=N;j++)
        {
            if(i+j==N)
            {
                A[k]=i;
                B[k]=j;
                k++;
                
            }
        }
    }
    
    for(T=0;T<=k;T++)
    {
        printf("case #%d  %d  %d",T+1,A[T],B[T]);
        
    }
    
    return 0;
}