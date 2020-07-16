#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool check(int a,int b)
{
    bool state1=1,state2=1;
    while (a!=0)
    {
        if (a%10==4)
        {
            state=0;
            break;
        }
        a=a/10;
    }
    while (b!=0)
    {
        if (b%10==4)
        {
            state=0;
            break;
        }
        b=b/10;
    }
    if (state1==0 && state2==0)
        return 0;
    else 
        return 1;
}
void main()
{
    int a,b,i,j,k;
    bool state=1;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        scanf("%d",&b);
        for (int j=0;j<=b;j++)
        {
            for (int k=0;k<=b;k++)
            {
               state=check(j,k);
               if (state==0 && j+k==b)
               {
                    printf("Case #%d: %d %d",i,j,k);
                    return;
               }
            }
        }
    }
}