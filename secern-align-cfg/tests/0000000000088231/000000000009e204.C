#include<stdio.h>
#include<stdlib.h>
int ispresent(unsigned long long int n)
{
    int flag=1;
    while(n>0)
    {
        if(n%10==4)
        {
            flag=0;
            break;
        }
        n/=10;
    }
    return flag;
}
int main()
{
    int n;
    scanf("%d",&n);
    unsigned long long int a[n],i,j;
    for(i=0;i<n;i++)
    scanf("%llu",&a[i]);
for(j=0;j<n;j++)
{
    for(i=1;i<=a[j];i++)
    {
        if(ispresent(i)&&ispresent(a[j]-i))
        {
            printf("Case #%d: %llu %llu\n",j+1,i,a[j]-i);
            break;
        }
    }
}
}