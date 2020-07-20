#include<stdio.h>
#include<conio.h>
int main()
{
    int t,n[100];
    scanf("%d",&t);
    int i,j;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    int count=0,a;
    int temp=n[0]/2;
    for(i=0;i<t;i++)
    {
        temp=n[i]/2;
        while(temp)
        {
            a=temp%10;
            temp=temp/10;
            if(a==4)
            {
                count++;
            }
        }
        if(count!=0)
        {
            printf("case #%d: %d %d",i+1,n[i]/2-100,n[i]/2+100);
        }
        else
        {
            printf("case #%d: %d %d",i+1,n[i]/2,n[i]/2);
        }
    }
}