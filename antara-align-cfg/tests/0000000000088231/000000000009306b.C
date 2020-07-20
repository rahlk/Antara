#include<stdio.h>
int test4(int);
int main()
{
    long int t,x,y,n[100000],temp;
    int i,flag,f=1;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        flag=0;
        flag=test4(n[i]);
        temp=n[i];
        if(flag==1)
        {
            x=temp/2;
            y=x;
            while(f==1)
            {
                if(test4(x)==1)
                {
                    x=x+y/2;
                    y=y/2;
                }
                else if(test4(y)==1)
                {
                    x=x+y/2;
                    y=y/2;
                }
                else
                    break;
            }
        }
        printf("Case #%d: %ld %ld\n",i,x,y);
    }
    return 0;
}

int test4(int d)
{
    while (d > 0)
    {
        int digit = d % 10;
        if(digit==4)
            return 1;
        d /= 10;
    }
    return 0;
}
