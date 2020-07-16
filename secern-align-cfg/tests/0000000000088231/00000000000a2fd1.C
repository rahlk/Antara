#include<stdio.h>
int main()
{
    int i,T,N,first,second,a[1000],b[1000],j,k,x;
    scanf("%d",&x);
    printf("%d\n",x);
    for(i = 1; i <= x; i++)
    {
       
       scanf("%d",&N);
       for (j = 1; j < N && j != 4; j++) 
       {
            first = a[j];
            for (k = j; k < N && k != 4; k++) 
            {
                second = b[k];
                if(first + second == N)
                {
                    printf("Case #%d: %d %d",i,first,second);
                    
                }
                break;
            }
       }
       return 0;
       
       

    }
}