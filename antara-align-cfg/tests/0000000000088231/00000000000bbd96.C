#include"stdio.h"
#include"string.h"
#define ll long long int

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100000000];
        ll n = 0;
        scanf("%s",a);
        int flag4=0,flag8=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='4')
                flag4=1;
                
            if(a[i]=='8')
                flag=1;
        }
        
        if(flag4 ==1 and flag8==1)
        {
            
        }
        
        else  if(flag8==1)
        {
            for(i=strlen(a)-1,j=0;i>=0;i--,j++)
                n = n + a[i]*pow(10,j);
            
            if((n%2)==0)
            {
                printf("%d %lld %lld",t,4*(n/4),n%4);
            }
        
            else
            {
                n = n/2;
                printf("%d %lld %lld",t,n,n+1);
            }
        }
        
        else
        {
            for(i=strlen(a)-1,j=0;i>=0;i--,j++)
                n = n + a[i]*pow(10,j);
                
            if((n%2)==0)
            {
                n = n/2;
                printf("%d %lld %lld",t,n,n);
            }
        
            else
            {
                n = n/2;
                printf("%d %lld %lld",t,n,n+1);
            }
                
            

        }
        
        
    }
}