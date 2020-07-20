#include<stdio.h>
int check(long int a)
{
    int res=2;
    long int c;
    while(a!=0)
    {
      c=a%10;
      a=a/10;
      if(c==4)
      {
        res=0;
        break;
      }
    }
              
         if(res!=0)
           return res=1;
}
int main()
{
    long int n[10000],j,b;
    int ans,test,i;
    scanf("%d", &test);
    for(i=0;i<test;i++)
    {
        scanf("%ld", &n[i]);
    }
    for(i=0;i<test;i++)
    {
        for(j=(n[i])/2;j>=1;j--)
        {
            ans=check(j);
            if(ans==1)
            {
                b=n[i]-j;
                ans=check(b);
                if(ans==1)
                {
                    printf("%ld %ld\n",j,b);
                    break;
                }
            }
        }
    }
    return 0;
}
