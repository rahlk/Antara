#include<stdio.h>


int main()
{
    int t,h,n,i,j=0;
    char x;
    
    
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       j++;
       printf("Case #%d: ",j);
       for(i=0;i<((2*n)-2);i++)
       {
           scanf(" %c",&x);
           if(x=='E')
           {
                printf("S");
           }
            else
            {
                printf("E");
            }
       }
       printf("\n");
       
       
    }
    return 0;
    
}