#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int t1=1;t1<=t;t1++)
    {
        int n;
        scanf("%d",&n);
        int a=0,b=0,c=1;
        while(n)
        {
            if(n%10==4)
            {
                a+=(2*c);
                b+=(2*c);
            }
            else
            {
                a+=((n%10)*c);
            }
            n/=10;
            c*=10;
            
        }
        printf("Case #%d: %d %d\n",t1,a,b);
    }
}