#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char s[100];
        scanf("%s",s);
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='E')
            s[j]='S';
            if(s[j]=='S')
            s[j]='E';
        }
        printf("Case #%d: %s\n",i+1,s);
    }
}