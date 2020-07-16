#include<stdio.h>
int main(void)
{
    long long int t,i,j,n;
    char a[5000000];
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        printf("Case #%lld: ",i);
        scanf("%lld",&n);
        scanf("%s",a);
            for(j=0;j<2*n-2;j++)
            {
                
                if(a[j]=='S')
                printf("E");
                else
                printf("S");
            }
            printf("\n");
    }
    return 0;
}