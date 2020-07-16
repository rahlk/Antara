#include<stdio.h>
void main()
{
    int a,b[],x,i=0,res[],temp=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
        scanf("%d",&b[i]);
    for(i=0;i<a;i++)
    {
        x=b[i];
        while(x!=0)
        {
            if(x%10=4)
                temp=(temp*10)+1;
            else
                temp=temp*10;
            x=x/10;
        }
    res[2*i]=b[i]-temp;
    res[(2*i)+1]=temp
    }
    for(i=0;i<a;i++)
    {
        printf("Case #1: %d %d\n",res[2*i],res[(2*i)+1])
    }
}