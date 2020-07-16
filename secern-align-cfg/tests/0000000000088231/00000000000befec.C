#include<stdio.h>
#include<math.h>
int main()
{
    int t,d,i;
    long int n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld",&n);
        long int num=n;
        int flag=0;
        /*while(num>0)
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
        {*/
            long int num1=n/2;
            long int num2=n/2;
            num=num1;
            int digit=0;
            long int change;
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
            printf("Case #%d: %ld %ld\n",i,num1,num2);
            
            
            
        //}
    }
}