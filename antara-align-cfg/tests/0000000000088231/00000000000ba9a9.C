#include<stdio.h>
int check(int i)
{
    while(i!=0)
    {
        if(i%10==4)
         return 1;
         i=i/10;
    }
    return 0;
}
void main()
{
    int t,n,i;
    scanf("%d",&t);
    x:while(t!=0)
    {
        t--;
        scanf("%d",&n);
        for(i=1;i<n/2;i++)
         if(check(i)==0 && check(n-i)==0)
         {
             printf("%d %d\n",i,n-i);
             goto x;
         }     
    }
}