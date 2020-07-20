#include<stdio.h>
int main()
{
    int n,a,x[100],j=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n);
        while(n>0)
        {
        x[j]=n%10;
        n=n/10;
        j++;
}
        for(k=0;k<j;k++)
    {
        if(x[k]==4)
        {
            x[k]=2;
        }
    }
    n=n-x;
        printf("%d\t%d\t",x,n);
    }
}