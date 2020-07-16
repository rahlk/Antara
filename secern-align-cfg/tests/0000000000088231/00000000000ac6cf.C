#include<stdio.h>
#include<string.h>
int main()
{
char n[102],a[102],b[102],f;
int t,i,j,count;
scanf("%d",&t);
for(i=1;i<=t;++i)
{
scanf("%s",n);
count=strlen(n);
for(j=0;j<count;++j) a[j]='0';
a[j]='\0';
strcpy(b,n);
b[count]='\0';
for(j=0;n[j]!='\0';++j)
{
if(n[j]=='4')
{
b[j]='3';
a[j]='1';
}
}

printf("Case #%d: %s %s\n",i,a,b);
}
return 0;
}