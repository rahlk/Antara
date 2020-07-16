#include<stdio.h>
int main()
{
    int i,T,N,first,second,a[1000],b[1000],j,k,x;
    scanf("%d",&x);
    printf("%d\n",x);
    for(i = 1; i <= x; i++)
    {
       scanf("%d",&T);
       scanf("%d",&N);
       for (j = 0; j < 100000 && j != 4; j++) 
       {
            first = a[j];
            for (k = j; k < 100000 && k != 4; k++) 
            {
                second = b[k];
                if(a[j] + b[k] == N)
                {
                    printf("Case #%d: %d %d",i,first,second);
                }
            }
       }
       return 0;
       
       

    }
}