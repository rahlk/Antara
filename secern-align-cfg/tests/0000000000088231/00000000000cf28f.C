#include<stdio.h>
#include<string.h>
int main()
{
  int k,i,i1=1,l;
  scanf("%d",&k);
  while(k--)
  {
  char n2[100];
  char n1[100];    
  scanf(" %s",n1);
  int v=0;
    for(i=0;i<strlen(n2);i++)
    {
      if(n2[i]=='4')
      {
        n2[i]='3';
        n1[i]='1';
        if(v==0)
    l=i;
        v++;
      }
      else
      n1[i]='0';
    }
    printf("Case #%d: %s ",i1++,n2);
    int i2;
  for(i2=l;i2<strlen(n2);i2++)
    {
      printf("%c",n1[i2]);
    }
    printf("\n");
  }
}