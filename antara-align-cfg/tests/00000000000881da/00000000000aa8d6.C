#include<stdio.h>
int main()
{
    int t,i,n;
    char a[10000],b[10000];
    scanf("%d",&t);
    while(i<=t)
    {
    scanf("%d",&n);
    for(i=1;i<=(2*n-2);i++)
    {
        scanf("%c",&a[i]);
    }
    printf("Case #%d: ",i);
    for(i=1;i<=(2*n-2);i++)
    {
        if(a[i]=='S')
        {
            a[i]='E';
        }
        else
        {
        a[i]='S';
        }
        printf("%c",a[i]);
    }
    }
}