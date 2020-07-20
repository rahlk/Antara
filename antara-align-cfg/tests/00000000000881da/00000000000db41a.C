#include<stdio.h>
#include<string.h>
void main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char s[n*2-1];
        scanf("%s",s);
        int j=1;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='S' || s[i]=='s')
                s[i]='E';
            else
                s[i]='S';
        }
        printf("case %d: %s",j,s);
        j++;
    }
}
