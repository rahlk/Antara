#include<stdio.h>
int check(long int a)
{
    int res;
        
        if((a%10)==4)
        {
          res=0;
          return res;
        }
        else
        if(a/10>1)
         check(a/10);
         
         if(res!=0)
           return res=1;
}
int main()
{
    long int n,ans,test,i,j,b;
    scanf("%ld", &test);
    for(i=0;i<test;i++)
    {
        scanf("%ld", &n);
        for(j=0;j<=n/2;j++)
        {
            ans=check(j);
            if(ans==1)
            {
                b=n-j;
                ans=check(b);
                if(ans==1)
                {
                    printf("Case #%ld: %ld %ld\n", i+1,j,b);
                    break;
                }
            }
        }
    }
    return 0;
}