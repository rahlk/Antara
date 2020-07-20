#include <stdio.h>

int tcase;
char s[50010];

int main()
{
    int cas,i;
    scanf("%d",&tcase);
    for(cas=1;cas<=tcase;cas++)
    {
        scanf("%*d%s",s+1);
        printf("Case #%d: ",cas);
        for(i=1;i<=s[i];i++) printf("%c",s[i]=='S'?'E':'S');
        printf("\n");
    }
    return 0;
}