#include<stdio.h>
int main()
{
    int N,T;
    scanf("%d",&T);
    scanf("%d",&N);
    for(int i=0;i<T;i++)
    {
        for(int j=0;j<N;j++)
        {
            for(int k=0;k<N;k++)
            {
                if(i+j==N)
                  printf("Case #%d: %d %d",i,j,k);
            }
        }    
    }
    return 0;
}