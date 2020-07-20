#include<stdio.h>
#include<string.h>
int main()
{
  int j,k,k3=1,anu;
  scanf("%d",&j);
  while(j--)
  {
  char n[100];
  char n1[100];    
  scanf(" %s",n);
  int c=0;
    for(k=0;k<strlen(n);k++)
    {
      if(n[k]=='4')
      {
        n[k]='3';
        n1[k]='1';
        if(c==0)
    anu=k;
        c++;
      }
      else
      n1[k]='0';
    }
    printf("Case #%d: %s ",k3++,n);
    int k2;
  for(k2=anu;k2<strlen(n);k2++)
    {
      printf("%c",n1[k2]);
    }
    printf("\n");
  }
}