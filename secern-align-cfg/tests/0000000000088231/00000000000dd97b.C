#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {   int m=0;
        char s[1000],l[1000];
        scanf("%s",s);
    j=0;
    while(s[j]!='4')
    j++;
    s[j]='2';
    l[m++]='2';
    j++;
    for(k=j;k<strlen(s);k++)
    {
        if(s[k]=='4')
        {
            s[k]='2';
            l[m++]='2';
        }
        else
        {
            l[m++]=2;
        }
    }
    printf("Case #%d: ",i);
    for(j=0;j<strlen(s);j++)
    printf("%c",s[j]);
    printf(" ");
    for(j=0;j<strlen(l);j++)
    printf("%c",l[j]);
    printf("\n");
    }
}