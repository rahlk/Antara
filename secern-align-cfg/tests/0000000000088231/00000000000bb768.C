#include<stdio.h>
#include<math.h>
int main()
{
    int temp,t,i,n,a,b,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        a=0;b=0;
        scanf("%d",&n);
        temp=n;
        for(j=0;temp!=0;j++,temp/=10)
        {
            if(temp%10==4)
            {
                a+=(2*((int)pow(10,j)));
                b+=(2*((int)pow(10,j)));
            }
            else
            {
                a+=(temp%10)*((int)pow(10,j));
            }
        }
        printf("Case #%d: %d %d\n",i+1,a,b);
    }

return 0;
}