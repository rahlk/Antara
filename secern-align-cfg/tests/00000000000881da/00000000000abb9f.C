#include <stdio.h>
char s[100020];
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%s",&k,s);
        for(j=0;s[j];j++)
        {
            if(s[j]=='S')
                s[j]='E';
            else
                s[j]='S';
        }
        printf("Case #%d: %s\n",i,s);
    }
    return 0;
}