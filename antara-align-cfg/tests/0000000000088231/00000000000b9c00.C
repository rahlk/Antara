#include<stdio.h>

void main()
{
    int t,t1,t2,n,p1,p2,s=0;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d",&n);
        if(n%2==0)
        {p1=n/2;
        p2=p1;}
        else{p1=n/2;
        p2=n/2+1;}

        t1=p1;
        t2=p2;
        while(t2!=0 || t1 != 0)
        {
            if(t1%10==4 || t2%10==4)
            {
                t1--;
                t2++;
                s++;
            }
            else
            {
                t1=t1/10;
                t2=t2/10;
            }

        }
        while(s!=0)
        {
            p1--;
            p2++;
        }
        printf(" Case #%d: %d %d",t,p1,p2);

t--;
    }
}
