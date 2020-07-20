#include<stdio.h>
int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    for(int q=1;q<=t;q++)
    {
        scanf("%lld",&n);
        long long int s=2*n-2;
        char p[s];
        scanf("%s",p);
        for(long long int j=0;j<(2*n)-2;j++)
        {
            if(p[j]=='E')
                printf("S");
            else
                printf("E");
        }
        printf("\n");
    }
    return 0;
}