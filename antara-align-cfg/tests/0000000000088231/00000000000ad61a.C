#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,a,b,num,d;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n>9)
        {
        num=n;
        int c=0;
        while(num!=0)
        {
            ++c;
            num=num/10;
        }
        int s[c];
        num=n;
        c=0;
        while(num!=0)
        {   
            d=num%10;
            if(d==4)
                s[c++]=1;
            else
                s[c++]=0;
            num=num/10;
        }
        int p=0;
        for(int j=0;j<c;j++)
        {
            p=p+s[j]*pow(10,j);
        }
        a=p;
        b=n-a;
        }
        else
        {
            a=2;
            b=2;
        }
        printf("Case #%d: %d %d \n",i,a,b);
        
    }
return 0;
}