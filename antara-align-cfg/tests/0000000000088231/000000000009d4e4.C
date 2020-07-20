#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,j,flag=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        flag=0;
        char s[101];
        scanf("%s",s);
        int l=strlen(s);
        char t[l];
        for(j=0;j<l;j++)
        {
            if(s[j]!='4')
                t[j]=s[j];
            else
            {
                t[j]='3';
            }
        }
        printf("Case #%d: ",i);
        for(j=0;j<l;j++)
        {
            printf("%c",t[j]);
        }
        printf(" ");
        for(j=0;j<l;j++)
        {
            if(s[j]!=t[j])
            {
                printf("1");
                flag=1;
            }
            if(s[j]==t[j] && flag==1)
                printf("0");
        }
        printf("\n");
    }
}