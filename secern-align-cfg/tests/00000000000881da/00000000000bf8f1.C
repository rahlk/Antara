#include <stdio.h>
#include <string.h>
int change(char *p)
{
    int i=0,j=0;
    int C1=0,C2=0;
    char c1=p[0],c2;
    if(c1=='E')
        c2='S';
    else
        c2='E';
    char a[1000];
    while(i<strlen(p))
    {
        C1=0;
        C2=0;
        while(p[i]==c1)
        {
            C1++;    
            i++;
        }
        while(p[i]==c2)
        {
            C2++;
            i++;
        }
        while(C2)
        {
            p[j]=c2;
            C2--;
            j++;
        }
        while(C1)
        {
            p[j]=c1;
            C1--;
            j++;
        }
    }
    return 0;
}
int main()
{
    int t,i=0;
    scanf("%d",&t);
    int len[t];
    char in[t][1000];
    while(i<t)
    {
        scanf("%d",&len[i]);
        scanf("%s",&in[i]);
        i++;
    }
    i=0;
    while(i<t)
    {
        change(in[i]);
        i++;
    }
    i=0;
    while(i<t)
    {
        printf("Case #%d: %s\n",(i+1),in[i]);   
        i++;
    }
    return 0;
}