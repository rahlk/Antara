#include<stdio.h>
#include<string.h>
int main()
{
  int t,x,x3=1,ctr;
  scanf("%d",&t);
  while(t--)
  {
  char n[100];
  char n1[100];    
  scanf(" %s",n);
  int c=0;
    for(x=0;x<strlen(n);x++)
    {
      if(n[x]=='4')
      {
        n[x]='3';
        n1[x]='1';
        if(c==0)
    ctr=x;
        c++;
      }
      else
      n1[x]='0';
    }
    printf("Case #%d: %s ",x3++,n);
    int x2;
  for(x2=ctr;x2<strlen(n);x2++)
    {
      printf("%c",n1[x2]);
    }
    printf("\n");
  }
}