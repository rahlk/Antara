#include<stdio.h>
#include<string.h>
#include<math.h>
int main(int m,char *argv[])
{
int t;
scanf("%d",&t);
for(int i=1;i<=t;++i)
{
int n_int;
scanf("%d",&n_int);
printf("Case #%d: ",i);
char n_str[11];
sprintf(n_str,"%d",n_int);
int count=strlen(n_str);
//printf("n_str:%s, len:%d\n",n_str,count);
int l=0,res=0;
int temp;
for(int j=count-1;j>=0;--j,++l)
{
temp=n_str[j]-48;
//printf("temp:%d,power:%d\n",temp,pow(10,l));
if (temp==4) res+=(temp-1)*(pow(10,l));
}
printf("%d %d\n",res,n_int-res);
}
return 0;
}