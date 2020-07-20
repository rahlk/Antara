#include<stdio.h>
#include<malloc.h>
void replace(char *a,int i,char c)
{
    a[i]=c;
}
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
    s=(char *)malloc(sizeof(char)*x);
    scanf("%s",s);
    while(s[j]!='\0')
    {
        if(s[j]=='E')
        {
            replace(s,j,'S');
            sc++;
        }

        else
        {
             replace(s,j,'E');
             ec++;
        }

    j++;
    }
    if(sc!=(n-1)||ec!=(n-1))
        exit(0);
        printf("Case #%d: %s\n",i,s);

    }
}
