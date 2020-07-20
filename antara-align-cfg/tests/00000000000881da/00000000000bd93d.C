#include<stdio.h>
char replace(char * p)
{   
   int i;
    for(i=0;p[i]!='\0';i++)
    {
    if(p[i]=='E')
        p[i]='S';
    else if(p[i]=='S')
        p[i]='E';
    }
}

int main()
{
    int t,n,i;
    char p[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%s",&p);
        replace(p);
        printf("Case #%d: %s\n",i+1,p);
    }
    return (0);
}