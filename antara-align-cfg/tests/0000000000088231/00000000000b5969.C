#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,t,temp;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int a=0;
        int b=0;
        if(n==0)
        {
            printf("Case #%d: %d %d",i+1,a,b);
        }
        else
        {
            b=0;
            int j=0,size=0;
            a=n;
            while(a!=0)
            {
                temp=a%10;
                if(temp==4)
                {
                    b+=2*pow(10,j);
                }
                a=a/10;
                j++;
            }
            a=n-b;
            printf("Case #%d: %d %d\n",i+1,a,b);
        }
    }
    return 0;
}