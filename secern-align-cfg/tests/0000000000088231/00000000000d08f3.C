#include<stdio.h>
#include<string.h>
int main()
{
  int k,i1,i3=1,ctr1;
  scanf("%d",&k);
  while(k--)
  {
  char n2[100];
  char n1[100];    
  scanf(" %s",n2);
  int c1=0;
    for(i1=0;i1<strlen(n2);i1++)
    {
      if(n2[i1]=='4')
      {
        n2[i1]='3';
        n1[i1]='1';
        if(c1==0)
    ctr1=i1;
        c1++;
      }
      else
      n1[i1]='0';
    }
    printf("Case #%d: %s ",i3++,n2);
    int i2;
  for(i2=ctr1;i2<strlen(n2);i2++)
    {
      printf("%c",n1[i2]);
    }
    printf("\n");
  }
}