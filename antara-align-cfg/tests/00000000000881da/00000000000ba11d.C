#include<stdio.h>
int main()
{
    int t,tt,L,i,ii=1;
    char s[10000],str[10000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&tt);
        L=2*tt-2;
        scanf("%s",&s);
        for(i=0;i<L;i++)
        {
            if(s[i]=='S')
               str[i]='E';
            else
               str[i]='S';
        }
        printf("Case #%d: %s\n",ii,str);
        ii++;
    }
}