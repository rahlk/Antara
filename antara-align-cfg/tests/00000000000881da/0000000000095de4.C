#include<stdio.h>
#include<string.h>
int main()
{
    long int t,dim,i,j;
    char e='E';
    char s='S';
    char a[10^10][10^10],ss[10^10];
    scanf("%ld",&t);

    for(i=0;i<t;i++)
    {
        scanf("%ld",&dim);
        scanf("%s",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<strlen(a[i]);j++)
        {
            if(a[i][j]==e)
                ss[j]=s;
            else if(a[i][j]==s)
                ss[j]=e;
            else
                ss[j]='0';
        }
        ss[j]='\0';
        printf("Case #%ld: %s",i,ss);
    }
    return 0;
}