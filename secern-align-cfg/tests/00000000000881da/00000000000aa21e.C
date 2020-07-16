#include<stdio.h>

int main()
{
    int t,h,n,i,j=0;
    char x;
    char a[50000];
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       
       for(i=0;i<2*n -2;i++)
       {
           scanf(" %c",&x);
           if(x=='E')
           {
                a[i]='S';
           }
            else
            {
                a[i]='E';
            }
       }
       j++;
       printf("Case #%d: %s\n",j,a);
    }
    return 0;
    
}