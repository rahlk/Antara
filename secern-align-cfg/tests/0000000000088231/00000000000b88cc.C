#include<stdio.h>
int main()
{
    int t,a;int b=0;int j,flag,flag1,d,p,q;
    scanf("%d",&t);
    int i,n;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);a=n;j=1;flag=1;flag1=1;
        while(flag==1&&flag1==1)
        {
            a=a-j;b=b+j;p=a;q=b;
            while(p>0)
            {
                d=p%10;
                if(d==4)
                {
                    flag=1;break;
                }
                else
                    flag=0;
                p=p/10;
            }
            while(q>0)
            {
                d=q%10;
                if(d==4)
                {
                    flag1=1;break;
                }    
                else
                    flag1=0;
                q=q/10;
            }
            j++;
        }
        printf("%d %d",a,b);
    }
    return 0;
}