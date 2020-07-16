#include<stdio.h>
int main()
{
int te;
scanf("%d",&te);
int n[te];
int j=0;
while(j<te)
{
scanf("%d",&n[j]);
char s[2*n[j]];
scanf("%s",s);
char a=s[0];
int i=0;
while(s[i]!='\0')
{
a=s[i];
if(a=='E')
{
s[i]='S';
i++;
continue;
}
else
{
s[i]='E';
i++;
}
}
printf("Case #%d: %s\n",(j+1),s);
j++;
}
return 0;
}