#include<stdio.h>
int check4(int a,int b)
{   int flag=0;
    int r;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        if(r==4)
           flag=1;
    }
    while(b>0)
    {
        r=b%10;
        b=b/10;
        if(r==4)
           flag=1;
    }
    return flag;
}
int main()
{
    long long int t,i,n,j,flag=0,c=0;
    scanf("%lld",&t);
    while(t--)
    {flag=0;
    c++;
        scanf("%lld",&n);
        for(i=1;i<n;i++)
        {   
            for(j=i+1;j<n;j++)
            {
                int ch=check4(i,j);
                if(i+j==n && ch==0)
                {
                  printf("Case #%lld: %lld %lld\n",c,i,j);
                  flag=1;
                  break;
                }
            
            }
            if(flag==1)
               break;
        }
    }
}