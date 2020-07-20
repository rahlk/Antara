#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct abc
{
 int a;
 char *c;
}k;
int main()
{
 int n,i,j,g,l;
 int cse;
 char tmp;
 scanf("%d",&cse);
 fflush(stdin);
 k num[cse];
 i=0;
 while(i<cse)
 {
  scanf("%d",&num[i].a);
  fflush(stdin);
  g=num[i].a;
  l=(2*g)-2;
  num[i].c=(char *)malloc(l+1);
  fgets(num[i].c,l+1,stdin);
  fflush(stdin);
  num[i].c[l]='\0';
  i++; 
 }
 i=0;
 while(i<cse)
 {
  g=(num[i].a*2)-2;
  char ch[g+1];
  j=0;
  while(j<g)
  {
   if(num[i].c[j]=='S')
    ch[j]='E';
   else ch[j]='S';
   j++;
  }
  ch[g]='\0';
  printf("Case #%d: %s \n",i+1,ch);
  i++; 
 }
 return 0;
}