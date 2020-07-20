#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,j=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,x;
        scanf("%d",&n);
        x=2*n-2;
        char s1[x],s2[x];
        scanf("%s",s1);
        for(i=0;i<x;i++)
        {
            if(s1[i]=='E')
                s2[i]='S';
            else
                s2[i]='E';
        }
        s2[i]='\0';
        printf("Case #%d: %s\n",j,s2);
        j++;
    }
}
