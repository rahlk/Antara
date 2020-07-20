#include<stdio.h>
int main()
{
    int i,a,b,n,T;
    scanf("%d",&T);
    for(i = 0; i < T; i++)
    {
       scanf("%d",&n);
       scanf("%d",&a);
       scanf("%d",&b);
       while((a + b) == n)
       {
            if( a != 4 && b != 4)
            {
                printf("Case #%d: %d %d",i,a,b);
            }
            else
            {
                a++;
                b++;
            }
           
       }
    }
    return 0;
    
    
}