#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void strrev(char s[])
{
    int i;
    int n;
    char c;
    n=strlen(s);
    int k,l;
    l=n-1;
    for(i=0;i!=l;i++,l--)
    {
        char c;
        c=s[i];
        s[i]=s[l];
        s[l]=c;
    }
}
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
        strrev(s);
        printf("%s",s);
        printf("\n");
    }
    return 0;
}