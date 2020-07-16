#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,a,b;
        scanf("%d",&n);
        a=1;
        b=n-1;
        int temp1=a,temp2=b;
        while(1)
        {
            int t1=a,t2=b,f1=0,f2=0;
            while(t1!=0)
            {
                int d=t1%10;
                if(d==4)
                {
                    a++;
                    b--;
                    break;
                }
                else
                    t1=t1/10;
            }
            while(t1==0&&t2!=0)
            {
                int d=t2%10;
                if(d==4)
                {
                    a++;
                    b--;
                    break;
                }
                else
                    t2=t2/10;
            }
            if(t1==0&&t2==0)
                printf("Case #%d: %d %d\n",i,a,b);
        }
    }
}