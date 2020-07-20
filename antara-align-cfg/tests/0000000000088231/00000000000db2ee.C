#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int a=1;a<=t;a++)
    {

    int m,x,u,y,z,sum=0;
    int arr[500];
    scanf("%d",&x);
    int i=1;
    u=x;
    while((x)%(int)pow(10,i) != x)
    {
        i++;
    }


    for(m=0;m<i;m++)
    {
    y=x%10;
    if(y==4)
    arr[m]=1;
    else
    {
        arr[m]=y;
    }
    x=x/10;
    }
    for(m=0;m<i;m++)
    {
        sum=sum+((arr[m])*(int)pow(10,m));
    }
    z=u-sum;
    printf("Case #%d: %d %d\n",a,sum,z);
}
}
