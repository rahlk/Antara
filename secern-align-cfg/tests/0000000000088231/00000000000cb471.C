#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        int temp=a[i];
        for(int j=1;j<temp;j++)
        {
            int x=j,y=temp-1;
            int temp2=x, temp3=y,k;
            while(temp2>0)
            {
                k=temp2%10;
                if(k==4)
                break;
                temp2=temp2/10;
            }
            if(k==4)
            continue;
            while(temp3>0)
            {
                k=temp3%10;
                if(k==4)
                break;
                temp3=temp3/10;
            }
            if(k==4)
            continue;
            printf("Case #%d: %d %d",i+1,x,y);
            break;
        }
    }
    
}