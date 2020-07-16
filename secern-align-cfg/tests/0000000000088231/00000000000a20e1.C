#include<stdio.h>
int main()
{
    int t,i=1;
    unsigned long n,ans=0,temp,base=1,r;
    scanf("%d",&t);
    while(i<=t)
    {   
        n=0,ans=0,temp=0,base=1,r;
        scanf("%d",&n);
        temp=n;
        while(n!=0)
        {
            r=n%10;
            if(r==4)
            {
                r=3;
            }
            ans=(base*r)+ans;
            base=base*10;
            n=n/10;
        }
        printf("Case #%d:\n %d %d",i,ans,(temp-ans));
        i++;
    }
    
}