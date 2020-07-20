#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j;
        scanf("%d",&n);
        char s[n],u[n];
        scanf("%s",&s);
        for(j=0;j<2*n-2;j++){
        if(s[j]=='E')
        u[j]='S';
        else
        u[j]='E';
        }
        u[j]='\0';
        
        printf("%s",u);
    }
}