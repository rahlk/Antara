#include<stdio.h>
void main()
{
    int t,n,i,arr1[100],arr2[100],num,len,dig,j,a,b,numbers[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<t;i++)
    {
        num=numbers[i];
        len=0;
        while(num>0)
        {
            dig=num%10;
            arr1[len]=dig;
            arr2[len]=dig;
            len++;
            num=num/10;
        }
        for(j=0;j<len;j++)
        {
            if(arr1[j]==4)
            {
                arr1[j]=3;
                arr2[j]=1;
            }
        }
        a=0;
        b=0;
        for(j=len-1;j>=0;j--)
        {
            a=a*10+arr1[j];
            b=b*10+arr2[j];
        }
        printf("Case #%d: %d %d\n",i+1,a,b);
        
    }
    exit(0);
}