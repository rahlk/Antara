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
 int i,j,g,cse;
 scanf("%d",&cse);
 fflush(stdin);
 k num[cse];
 i=0;
 while(i<cse)
 {
  scanf("%d",&num[i].a);
  fflush(stdin);
  g=num[i].a;
  num[i].c=(char *)malloc(2*g*sizeof(char));
  scanf("%s",num[i].c);
  i++; 
 }
 i=0;
 while(i<cse)
 {
  j=0;
  while(num[i].c[j]!='\0')
  {
   if(num[i].c[j]=='S')
   {
    num[i].c[j]='E';
   }
   else
   { 
    num[i].c[j]='S';
   }
   j++;
  }
  printf("Case #%d: %s \n",i+1,num[i].c);
  i++; 
 }
 return 0;
}