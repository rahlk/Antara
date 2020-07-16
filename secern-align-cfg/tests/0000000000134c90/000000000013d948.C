#include<stdio.h>
#include<string.h>
int main()
{
 int tst;
 scanf("%d",&tst);
 int z;
 z=0;
 while(z<tst)
 {
  int cse;
  scanf("%d",&cse);
  char c[cse][100];
  int i;
  for(i=0;i<cse;i++)
  {
   scanf("%s",&c[i]);
  }
  int j;
  char inp[100];
  for(i=0;i<cse;i++)
  {
   if(c[i][i]=='R')
   {
    inp[i]='P';
   }
   else if(c[i][i]=='P')
   {
    inp[i]='S';
   }
   else if(c[i][i]=='S')
   {
    inp[i]='R';
   }
  }
  inp[]='\0';
  int  loose=0;
  for(i=0;i<cse;i++)
  {
   for(j=i-1;j>=0;j--)
   {
    if((c[i][j]=='R')&&(inp[j]=='S'))
    {
     loose++;
    }
    else if((c[i][j]=='P')&&(inp[j]=='R'))
    {
     loose++;
    }
    else if((c[i][j]=='S')&&(inp[j]=='P'))
    {
     loose++;
    }
   }
  }
  if(loose==1)
  {
   printf("Case #%d: IMPOSSIBLE",tst);
  }
  else
  {
   printf("Case #%d: %s",tst,inp);
  }
  z++;
 }
 return 0;
}