#include <stdio.h>
int main()
{
    int t,c=1;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,a[102],temp[102],b[102];
        scanf("%lld",&n);
        int count=0,count2=0;
        for (int i = n; i!=0; i/=10)
        {
            count+=1;
        }
        int j;
        for (int i = n,j = count-1; j >= 0 ; j--)
        {
            a[j]=i%10;
            i/=10;
        }
        for (int i = 0; i < count; i++)
        {
            if (a[i]==4)
            {
                a[i]=3;
                temp[i]=1;
            }
            else
                temp[i]=0;
        }
        j=0;
        while(temp[j]==0)
            j+=1;
        count2=count-j;
        for (int i = 0; i < count2; i++)
        {
            b[i]=temp[j];
            j+=1;
        }
        printf("Case #%lld: ",c);
        for (int i = 0; i < count; i++)
            printf("%lld",a[i]);
        printf(" ");
        for (int i = 0; i < count2; i++)
            printf("%lld",b[i]);
        printf("\n");
        c=c+1;
    }
    return 0;
}