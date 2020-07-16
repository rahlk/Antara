#include<stdio.h>
int num(int num)
{
    while(num)
    {
        int r=num%10;
        if(r==4)
        return 0;
        else
        num=num/10;
    }
     return 1;
}
int main()
{
    int t,flag=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,i,j;
        scanf("%d",&a);
        for(i=0;i<a/2,num(i)==1;i++)
        {
            for(j=0;j<a/2,num(j)==1;j++)
            {
               if(i+j==a) 
               flag=1;
            }
        }
        if(flag==1)
        printf("case #%d: %d %d\n",t,i,j);
    }
    return 0;
}