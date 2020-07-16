#include<stdio.h>
int main()
{
    int i,n,T,x,first,second,a[1000],b[1000],j;
    scanf("%d",&T);
    for(i = 0; i < T; i++)
    {
       scanf("%d",&T);
       scanf("%d",&x);
       for (i = 0; i < 1000 && i != 4; i++) 
       {
            first = a[i];
            for (j = i + 1; j < 1000 && j != 4; j++) 
            {
                second = b[j];
                if(a[i] + b[j] == x)
                {
                    printf("Case #1: %d %d",a[i],b[j]);
                }
            }
       }
       return 0;
       
       

    }
}