#include<stdio.h>
#include<string.h>

int main()
{
    int cas;
    int i,j,s;
    char c[105], a[105], b[105];
    
    scanf("%d%c",&cas,&c[0]);
    memset(c,'\0',105);
    memset(b,'\0',105);
    
    for(s=1;s<=cas;s++)
    {
        gets(c);
        printf("Case #%d: ",s);
        for(i=0;i<(int)strlen(c);i++)
        {
            if(c[i]=='4') printf("2"), b[i]='2';
            else printf("%c",c[i]), b[i]='0';
        }printf(" ");
        for(i=0;b[i]=='0';i++);
        for(;i<(int)strlen(c);i++) printf("%c",b[i]);
        puts("");
        
        memset(c,'\0',105);
        memset(b,'\0',105);
    }
    return 0;
}
