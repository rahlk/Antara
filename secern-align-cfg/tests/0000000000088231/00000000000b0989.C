#include<stdio.h>
#include<math.h>

int main()
{
    int t,x[100],y[100],n[100],temp;
    int i,k,power;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        x[i]=0;
        y[i]=0;
        temp=n[i]/2;
        power=0;
        while ( temp > 0)
        {
            int digit = temp % 10;
            if(digit==4)
            {
                x[i]+=(digit+1)*pow(10,power);
                y[i]+=(digit-1)*pow(10,power);
                power++;
            }
            else
            {
                x[i]+=digit*pow(10,power);
                y[i]+=digit*pow(10,power);
                power++;
            }
            temp =temp/ 10;
        }
    }
    for(k=0;k<t;k++)
    {
        printf("Case #%d: %d %d\n",k+1,x[k],y[k]);
    }
    return 0;
}
