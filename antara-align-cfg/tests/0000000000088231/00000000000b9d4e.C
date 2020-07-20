#include<stdio.h>
int main()
{
    int t,a;int b=0;int j,flag,flag1,d,p,q,a1,b1;
    scanf("%d",&t);
    int i,n;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);a=n;j=1;flag=1;flag1=1;
        while(flag==1||flag1==1)
        {
            a1=a-j;
            b1=b+j;
            p = a1;
            q = b1;
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
        printf("Case #%d: %d %d",i+1,a1,b1);
        printf("\n");
    }
    return 0;
}