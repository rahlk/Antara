#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        char s[2*n-2];
        scanf("%d",&n);
        scanf("%s",s);
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='E')
            s[j]='S';
            else if(s[j]=='S')
            s[j]='E';
        }
        printf("Case #%d: %s\n",i+1,s);
    }
}