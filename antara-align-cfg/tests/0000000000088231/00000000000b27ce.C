#include<stdio.h>
int main()
{
 int i,j,t,k,n;
 char s[110],p[110];
 scanf("%d",&t);
 for(k=1;k<=t;k++)
 {  for(i=0;i<100;i++)
 p[i]='0';
     i=0;
  scanf("%s",s);
   while(s[i]!='\0')
  {
    if(s[i]=='4')
   {s[i]='3';
   p[i]='1';
   }
   i++;

 }n=0;
 while(p[n]=='0')
     n++;
    
 printf("Case #%d: ",k);

 for(j=n;j<i;j++)
 printf("%c",p[j]);
 printf(" ");
 for(j=0;j<i;j++)
 printf("%c",s[j]);
 printf("\n"); }return 0;
}
