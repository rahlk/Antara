#include <stdio.h>
int main()
{
    int t,n,n1,n2,r1,r2,t1,t2,flag1,flag2;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        n1=n/2;
        n2=(n%2==0)?n/2:((n/2)+1);
        flag1=0;
        flag2=0;
        while(flag1!=1 || flag2!=1)
        {
            flag1=1;
            flag2=1;
            t1=n1;
            t2=n2;
            while(t1>0)
            {
                r1=t1%10;
                t1=t1/10;
                if(r1==4)
                flag1=0;
            }
            while(t2>0)
            {
                r2=t2%10;
                t2=t2/10;
                if(r2==4)
                flag2=0;
            }
            if(flag1!=1 || flag2!=1)
            {
                n1--;
                n2++;
            }
        }
        printf("Case #%d: %d %d \n",(i+1),n1,n2);
    }
    return 0;
}