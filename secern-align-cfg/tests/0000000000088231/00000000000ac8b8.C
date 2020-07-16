#include<stdio.h>
int check(int a)
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
    int n,ans,test,i,j,b;
    scanf("%d", &test);
    for(i=0;i<test;i++)
    {
        scanf("%d", &n);
        for(j=0;j<=n/2;j++)
        {
            ans=check(j);
            if(ans==1)
            {
                b=n-j;
                ans=check(b);
                if(ans==1)
                {
                    printf("%d %d\n", j,b);
                    break;
                }
            }
        }
    }
    return 0;
}