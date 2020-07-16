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
        scanf("%s",s);
        int y=strlen(s);
        char c=s[0];
        s[0]=s[y-1];
        s[y-1]=c;
        printf("%s",s);
        printf("\n");
    }
    return 0;
}