#include<stdio.h>
#include<malloc.h>
int main()
{
    int T,i=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
    int n,j=0,x,sc=0,ec=0;
    scanf("%d",&n);
    char *s,*s1;
    x=2*n-2;
    printf("X is:%d",x);
    s=(char *)malloc(sizeof(char)*x);
    s1=(char *)malloc(sizeof(char)*x);
    scanf("%s",s);
    while(s[j]!='\0')
    {
        if(s[j]=='E')
        {
            s1[j]='S';
            sc++;
        }

        else
        {
             s1[j]='E';
             ec++;
        }

    j++;
    }
    if(sc!=(n-1)||ec!=(n-1))
        exit(0);
    s1[j]='\0';

        printf("Case #%d: %s",i,s1);

    }
}
