#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    long long n;
    char s[50000];
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%c",&s[i]);
            if(s[i]=='E')
            {
                s[i]='S';
            }
            else
            {
                s[i]='E';
            }
        }
        puts(s);
        printf("\n");
    }
    return 0;
}