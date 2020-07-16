#include<stdio.h>
int main()
{
    int t,rem=0,found=0L,k,w;
    scanf("%d",&t);
    while(t--)
    {
        int x,q,r,re=0;
        scanf("%d",&x);
        q=x;
        while(q!=0)
        {
            rem=q%10;
            if(rem==4)
            {
                found=1;
            }
            q=q/10;
        }
        printf("%d",found);
        if(found==1)
        {
            int i=0;
            r=x/2;
            while(r!=0)
            {
                re=r%10;
                if(re!=4)
                {
                    i=0;
                    k++;
                }
                else
                {
                    i=1;
                }
                r=r/10;
            }
             if(k==0)
            {
            w=1;
            }
            if(k==1)
            {
                w=10;
            }
            if(k==2)
            {
                w=100;
            }
            if(k==3)
            {
                w=1000;
            }
            if(k==4)
            {
                w=10000;
            }
            if(i==0)
            {
                printf("A=%d B=%d\n",x/2,x/2);
            }
            if(i==1)
            {
                printf("A=%d B=%d\n",(x/2)+w,(x/2)-w);
            }
        }
        if(found==0)
        {
            printf("vvnf");
        }
    
        rem=0;
        found=0;
    }
}