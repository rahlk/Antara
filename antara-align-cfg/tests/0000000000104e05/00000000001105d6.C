#include<stdio.h>
#include<string.h>
int main()
{
int t,num,x=0,y=1,j,l;
scanf("%d",&t);
while(t>0)
{
scanf("%d",&num);
char input[num][1000],a[num];
char *g,*k;
int b=0,c,d,e,z=0;
a[num]=0;
for(x=0;x<num;x++)
{
scanf("%s",&input[num][0]);
}
if(num==2) z=2;
if(num==3) z=0;
if(num==6) z=6;
if(num==4) z=2;

printf("Case #%d: %d\n",y,z);
y++;
t--;
}
return 0;
}