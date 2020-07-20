#include<stdio.h>
int main()
{
    int t=0,n=0,count=1,num=0,p=0,r,t1;
    scanf("%d",&t);
    t1=t;
    while(t--)
    {scanf("%d",&n);
      count=1;
      p=0;
      num=0;
        while(n!=0)
        {r=n%10;
            if(r==4)
            {
              num=((r-1)*count)+num;
              p=p+count*1;
              
            }
            else
            {
                num=r*count+num;
            }
            n=n/10;
            count*=10;
        }
        printf("Case #%d: %d  %d",t1-t,num,p);
    }
    return 0;
}