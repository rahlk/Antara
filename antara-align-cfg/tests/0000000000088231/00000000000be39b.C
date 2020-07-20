#include<stdio.h>
#include<math.h>
int main()
{
    for(int j=1;j<=3;j++)
    {
    int n,x=0,y=0,t;
    scanf("%d",&n);
    int n1=n,a[30],b[30],k=0,m=0;
    while(n1!=0)
    {
        t=n1%10;
        a[k]=t;
        k++;
        n1=n1/10;
    }
    for(int i=0;i<k;i++)
    {
        if(a[i]==4)
        {
            a[i]=a[i]/2;
            b[i]=a[i];
            m++;
        }
        else
        {
            b[i]=0;
        }
    }
    for(int i=0;i<k;i++)
    {
        x=x+a[i]*pow(10,i);
        y=y+b[i]*pow(10,i);
    }
    printf("case #%d: %d %d",j,x,y);
    }
}