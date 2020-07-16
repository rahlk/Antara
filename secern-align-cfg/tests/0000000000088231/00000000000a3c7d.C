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
int main()
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
        for(int j=arr[i]/2,k=arr[i]/2;j>0 && k<arr[i];j--,k++)
        {  
            if(contains(j,k)==1 && j+k==arr[i])
            {  
                a=j;
                b=k;
                break;
            }
        }
        printf("Case #%d: %d %d\n",i+1,a,b);
    }
    return 0;
}