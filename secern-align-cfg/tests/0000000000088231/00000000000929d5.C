#include<stdio.h>
int test4(int);
void main()
{
    long int t,x,y,n[100000],temp;
    int i,j,flag,f=1;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        j=0;
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
        printf("Case #%d: %d %d\n",i,x,y);
    }
}

int test4(int d)
{
    int x;
    while(d%10!=0)
    {
        if(d%10==4)
            return 1;
        d=d/10;
    }
    return 0;
}
