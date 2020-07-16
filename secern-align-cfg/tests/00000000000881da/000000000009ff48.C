#include<stdio.h>
#include<string.h>
int main()
{
int t,k;
scanf("%d",&t);
for(k=1;k<=t;k++)
{
int n,i,len;
scanf("%d",&n);
char p[2*n];
scanf("%s",p);
len = strlen(p);
for(i=0;i<len;i++)
{
    if(p[i] =='E')
      {p[i] =='S';}
    else if(p[i] =='S')
      {p[i] =='E';}
}
 printf("Case #%d: %s\n",k,p); 

}
return 0;
}