#include<stdio.h>
int main()
{
    int t,i,j;
    unsigned long long int n[100],x[100],a;
    scanf("%d",&t)==1;
    for(i=0;i<t;i++)
    {
        scanf("%llu", &n[i])==1;
    }
     for(i=0;i<t;i++)
    {
        x[i]=n[i];
        while(x[i]!=0)
        {
            int rem=x[i]%10;
            if(rem==4)
            {
                a=n[i]/4;
            }
            x[i]=x[i]/10;
        }
        printf("Case #%d: %llu %llu \n",i+1,a,(n[i]-a));
        
    }
    
return 0;
}