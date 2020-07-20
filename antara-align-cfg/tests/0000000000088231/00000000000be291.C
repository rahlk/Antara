#include<stdio.h>
unsigned long long int t,n,i,j,temp;
int main()
{
    int flag;
    scanf("%llu",&t);
    for(i=1;i<=t;i++)
    {
        printf("Case #%llu: ",i);
        scanf("%llu",&n);
        for(j=n/2;;j++)
        {
            flag=0;
            temp=j;
            while(temp>0)
            {
                if(temp%10==4)
                    flag=1;
                temp/=10;
            }
            if(flag==1)
                continue;
            temp=n-j;
            while(temp>0)
            {
                if(temp%10==4)
                    flag=1;
                temp/=10;
            }
            if(flag==1)
                continue;
            else
            {
                printf("%llu %llu\n",j,(n-j));
                break;
            }
        }
    }
    return 0;
}