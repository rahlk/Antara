#include<stdio.h>
int main()
{
 int t,n,i,j,no=0;
 char a[100],b[100];
 scanf("%d",&t);
 while(t--)
 {
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;a[i];i++)
    {
        if(a[i]=='E')
        b[i]='S';
        else
        b[i]='E';
    }
    b[i]='\0';
    printf("Case #%d: %s\n",++no,b);
 }
}