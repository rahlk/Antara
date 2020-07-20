#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<t;i++)
    {
        int temp=a[i],k,f1=0,x,y,temp2;
        temp=temp/4;
        label:
        temp2=temp;
        while(temp>0)
        {
            k=temp%10;
            if(k==4)
            f1=1;
            temp=temp/10;
        }
        if(f1==0)
        {
            x=temp2;
            y=a[i]-x;
        }
        else
        {
            temp=temp/4;
            goto label;
        }
        printf("Case #%d: %d %d\n",i+1,x,y);
    }
}