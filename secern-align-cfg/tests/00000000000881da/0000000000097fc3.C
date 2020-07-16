#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,j;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {
        long long int n,i;
        scanf("%lld",&n);
        char str[2*n];
        scanf(" %[^\n]",str);
        printf("Case #%lld: ",j);
        for(i=0;i<n*2-2;i++)
        {
            if(str[i]=='S')
                printf("E");
            else
                printf("S");
        }
        printf("\n");
    }
}