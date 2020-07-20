#include<stdio.h>
int main()
{
    int i,a,b,n,T,x;
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
                    printf("Case #%d: %d %d",j,a[i],b[j]);
                }
            }
       }
       return 0;
       
       

    }
}