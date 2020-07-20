#include<stdio.h>
int contains(int a)
{
    int flag=0;
    while(a!=0)
    {
        if(a%10==4)
        flag++;
        a=a/10;
    }
    if(flag=0)
    return 1;
    else
    return 0;
}
void main()
{
    int t,n,a,b;
    scanf("%d",&t);
    int arr[]=(int *)calloc(sizeof(int)*t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<a[i];j++)
        {
            if(contains(j) && contains(a[i]-j))
            {
                a=j;
                b=a[i]-j;
            }
        }
        printf("Case #%d: %d %d",i+1,a,b)
    }
}