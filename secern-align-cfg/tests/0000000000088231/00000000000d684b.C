#include<stdio.h>
int main()
{
 int n;
scanf("%d",&n);
int a=0;
int m=n;
int i=0;
while(m)
{
    ++i;
    int x=m%10;
    if(x!=4)
    {
        for(int j=1;j<i;j++)
        x*=10;
        a=a+x;

    }
    else
    {
        x=x-1;
        for(int j=1;j<i;j++)
        x=x*10;
        a=a+x;

    }

    m=m/10;
    }

    printf("%d %d",a,n-a);



return 0;
}
