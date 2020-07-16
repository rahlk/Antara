#include<stdio.h>
int main()
{
    int t,i;
    long int n,temp=0,sum=1,d,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld",&n);
        a=n/2;
        b=n/2;
        if(n%2 !=0)
        a=a+1;
        temp=b;
        d=0;
        sum=1;
        while(temp>0)
        {
            d=temp%10;
            if(d!=4)
            sum=sum*10;
            else{
            if(sum==1)
            {a=a-4;b=b+4;}
            else
            {
            sum=sum*4;
            a=a-sum;
            b=b+sum;
        }}
            temp=temp/10;
        }
                printf("Case #%d: %d %d\n",i,a,b);
    }
    return 0;
}
