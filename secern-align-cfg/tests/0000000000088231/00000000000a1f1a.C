#include<stdio.h>
int main()
{
    int i,T,x,first,second,a[1000],b[1000],j,k;
    
    for(i = 1; i <= 100; i++)
    {
       scanf("%d",&T);
       scanf("%d",&x);
       for (j = 0; j < 1000 && j != 4; j++) 
       {
            first = a[j];
            for (k = j; k < 1000 && k != 4; k++) 
            {
                second = b[k];
                if(a[j] + b[k] == x)
                {
                    printf("Case #%d: %d %d",i,first,second);
                }
            }
       }
       return 0;
       
       

    }
}