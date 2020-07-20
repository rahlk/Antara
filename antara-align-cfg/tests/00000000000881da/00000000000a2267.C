#include<string.h>
#include<stdio.h>

int main()
{
    int cas,s,i,n;
    char a[50005];

    scanf("%d",&cas);
    for(s=1;s<=cas;s++) 
    {
        scanf("%d%c",&n,&a[0]);
        gets(a);
        
        printf("Case #%d: ",s);
        for(i=0;i<(int)strlen(a);i++) 
        {
            printf("%c",(a[i]=='E'?'S':'E'));
        }puts("");
    }
    return 0;
}