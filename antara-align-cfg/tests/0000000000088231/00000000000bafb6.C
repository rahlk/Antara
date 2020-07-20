#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,d;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int num=n;
        int flag=0;
        while(num>0)
        {
            d=num%10;
            if(d==4)
            {
                flag=1;
                break;
            }
            num=num/10;
        }
        if(flag==0)
            continue;
        else
        {
            int num1=n/2;
            int num2=n/2;
            num=num1;
            int digit=0;
            int change;
            while(num>0)
            {
                d=num%10;
                digit++;
                
                if(d==4)
                {
                    change = pow(10,digit-1);
                    num1+=change;
                    num2-=change;
                }
                num=num/10;
            }
            printf("Case #%d: %d %d\n",i,num1,num2);
            
            
            
        }
    }
}