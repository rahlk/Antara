#include<stdio.h>
char replace(char * p,char c1,char c2)
{   
   int i;
    for(i=0;p[i]!='\0';i++)
    {
    if(p[i]==c1)
        p[i]=c2;
    else if(p[i]==c2)
        p[i]=c1;
    }
}

void main()
{
    int t,n,i;
    char p[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%s",&p);
        replace(p,'E','S');
        printf("%s",p);
    }
}
        