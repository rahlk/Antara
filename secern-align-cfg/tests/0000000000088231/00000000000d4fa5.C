#include<stdio.h>
int check(int temp)
{
    int temp1=temp,k,f=0;
    while(temp1>0)
    {
        k=temp1%10;
        if(k==4)
        f=1;
        temp1=temp1/10;
    }
    if(f==0)
    return temp;
    else
    check(temp/2);
}
int main()
{
    int t;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<t;i++)
    {
        int x;
        x=check(a[i]);
        int y=a[i]-x;
        printf("Case #%d: %d %d\n",i+1,x,y);
    }
}