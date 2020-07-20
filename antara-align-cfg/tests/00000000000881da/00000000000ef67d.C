#include<stdio.h>
#include<string.h>
int main()
{
int t,n,u;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
scanf("%d",&n);
u=2*n-2;
char d[2*n-2],a[2*n-2];
scanf("%s",d);
for(int j=0;j<2*n-2;j++)
{
    if(d[j]=='S')
    a[j]='E';
    else if(d[j]=='E')
    a[j]='S';
}
a[2*n-2]='\0';
printf("Case #%d: ",i);
printf("%s\n",a);

}
}