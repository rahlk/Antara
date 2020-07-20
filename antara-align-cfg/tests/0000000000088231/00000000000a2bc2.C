#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    int n,d,count=0;
    int* ar=(int*)malloc(sizeof(int)*20);
    int* ar1=(int*)malloc(sizeof(int)*20);
    scanf("%d",&t);
    for(int w=1;w<=t;w++)
    {
        scanf("%d",&n);
        int m=n;
        count=0;
        while(m>0)
        {
            d=m%10;
            ar[count]=d;
            count++;
            m=m/10;
        }
        for(int i=0;i<count;i++)
            ar1[i]=0;
        for(int i=0;i<count;i++)
        {
            if(ar[i]==4)
            {
                ar[i]-=1;
                ar1[i]=1;
            }
        }
        printf("Case %d:",w);
        for(int i=count-1;i>=0;i--)
            printf("%d",ar[i]);
        printf(" ");
        for(int i=count-1;i>=0;i--)
            printf("%d",ar1[i]);
        printf("\n");
    }
}