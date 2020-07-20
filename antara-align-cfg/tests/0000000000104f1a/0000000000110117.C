#include<stdio.h>
#include<stdlib.h>
int main()
{
 int p,x,t,j,q,str,stc;
 //printf("Enter no. of test cases::");
 scanf("%d",&p);
 for(j=0;j<p;j++)
 {
 scanf("%d %d\n",&x,&t);
 if(x==t)
 {
 printf("Case #1: IMPOSSIBLE\n");
 }
 printf("Case #2: POSSIBLE\n");
 str=x;
 stc=t-x;
 for(j=str;q<x;j++)
 {
  for(q=stc;q<t;q++)
  {
   printf("%d %d\n"j,q);
   q++;
   if(q==t)
   {
   q==1;
   }
  }
  }
  }
  return 0;
  }
  
 