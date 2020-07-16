#include<stdio.h>
#include<stdlib.h>
int contains(int a,int b)
{
    int flag=0;
    while(a!=0 || b!=0)
    {
        if(a%10==4 || b%10==4)
        flag++;
        a=a/10;
        b=b/10;
    }
    if(flag==0)
    return 1;
    else
    return 0;
}
void main()
{
    int t,n,a=0,b=0;
    scanf("%d",&t);
    int *arr=(int *)calloc(t,sizeof(int));
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<arr[i];j++)
        {  
            if(contains(j,arr[i]-j)==1)
            {  
                a=j;
                b=arr[i]-j;
            }
        }
        printf("Case #%d: %d %d\n",i+1,a,b);
    }
}