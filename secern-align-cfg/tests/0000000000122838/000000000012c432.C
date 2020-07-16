#include<stdio.h>
#include<math.h>

int main()
{
    int T;
    scanf("%d",&T);
    int i,j,t;
    for(t=1;t<=T;t++)
    {
        int N;
        long int K;
        scanf("%d %ld",&N,&K);
        long int a[2][N];
        for(i=0;i<2;i++)
        {
            for(j=0;j<N;j++)
            {
                scanf("%ld",&a[i][j]);
            }
        }
        long int c=0;
        for(j=0;j<N;j++)
        {
            long int te = a[0][j];
            for(i=j;i<N;i++)
            {
                if(abs(a[1][i]-te)<=K)
                c++;
            }
        }
        
        printf("Case #%d: %ld",t,c);
        
    }
    
    return 0;
}