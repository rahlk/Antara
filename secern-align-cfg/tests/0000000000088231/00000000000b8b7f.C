#include<stdio.h>
int istherefour(long a);
int main()
{
    int t;
    scanf("%d",&t);
    long n[t];
    for(int i=0;i<t;i++)
    {
        scanf("%ld",&n[i]);
    }
    for(int i=0;i<t;i++)
    {
        for(int j=1;j<n[i];j++)
        {
            if(istherefour(j)==0 && istherefour(n[i]-j)==0)
            {
                printf("Case #%d: %d %d\n",i+1,j,n[i]-j);
                j=n[i];
            }
        }
    }
}
int istherefour(long a)
{
    long r;
  while(a!=0)
    {
        r=a%10;
        if(r==4)
        {
            return 1;
        }
        a=a/10;
        
    }
    return 0;
}