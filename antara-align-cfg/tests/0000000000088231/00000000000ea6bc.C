#include<stdio.h>
#include<string.h>
int main()
{
int t,i,c=0,q=0;
scanf("%d",&t);
while(t--)
{
    q=0;
char s[105];
scanf("%s",s);
int l=strlen(s);
char a[l];
for(i=0;i<l;i++)
a[i]='0';
for(i=0;i<l;i++)
{
if(s[i]=='4')
{
a[i]='1';
s[i]='3';
}
}
c++;
printf("Case #%d: ",c);
for(i=0;i<l;i++)
{
if(a[i]=='1'||q==1)
{
printf("%c",a[i]);
q=1;
}
}
printf(" ");
for(i=0;i<l;i++)
printf("%c",s[i]);
printf("\n");
}
}