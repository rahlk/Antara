#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
int t;
scanf("%d",&t);
int i;
for(i=1;i<=t;i++)
{
int a,b=0;
int R,P,S=0;
scanf("%d",&a);
char s[a][500];
char res[500];
int j;
for(j=0;j<a;j++)
{
scanf("%s",s[j]);
}
int r[a];
for(j=0;j<a;j++)
r[j]=0;
int count=0;
int flag=1;
while(count<a)
{
S=P=R=0;
for(j=0;j<a;j++)
{
if(s[j][r[j]]=='R'&&r[j]!=-1)
R++;
if(s[j][r[j]]=='S'&&r[j]!=-1)
S++;
if(s[j][r[j]]=='P'&&r[j]!=-1)
P++;
}
if(R!=0&&S!=0&&P!=0)
{
printf("IMPOSSIBLE\n");
count=a;
flag=0;
}
else if(S==0&&R==0&&P!=0)
{
    count=a;
    res[b]='S';
    b++;
}
else if(P==0&&R==0&&S!=0)
{
    count=a;
    res[b]='R';
    b++;
}
else if(S==0&&P==0&&R!=0)
{
    count=a;
    res[b]='P';
    b++;
}
else if(S==0&&R!=0&&P!=0)
{
res[b]='P';
b++;
for(j=0;j<a;j++)
{
if(r[j]!=-1)
{
if(s[j][r[j]]=='R')
{
r[j]=-1;
count++;
}
if(s[j][r[j]]=='P'&&r[j]==strlen(s[j])-1)
r[j]=0;
if(s[j][r[j]]=='P'&&r[j]<strlen(s[j])-1)
r[j]++;
}
}
}
else if(P==0&&R!=0&&S!=0)
{
res[b]='R';
b++;
for(j=0;j<a;j++)
{
if(r[j]!=-1)
{
if(s[j][r[j]]=='S')
{
r[j]=-1;
count++;
}
if(s[j][r[j]]=='R'&&r[j]==strlen(s[j])-1)
r[j]=0;
if(s[j][r[j]]=='R'&&r[j]<strlen(s[j])-1)
r[j]++;
}
}
}
if(R==0&&P!=0&&S!=0)
{
res[b]='S';
b++;
for(j=0;j<a;j++)
{
if(r[j]!=-1)
{
if(s[j][r[j]]=='P')
{
r[j]=-1;
count++;
}
if(s[j][r[j]]=='S'&&r[j]==strlen(s[j])-1)
r[j]=0;
if(s[j][r[j]]=='S'&&r[j]<strlen(s[j])-1)
r[j]++;
}
}
}
}
if(flag==1)
for(j=0;j<b;j++)
printf("%c",res[j]);
printf("\n");
}
return 0;
}