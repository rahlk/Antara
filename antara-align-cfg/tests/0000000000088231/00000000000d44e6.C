#include<stdio.h>
#include<string.h>
int main()
{
  int p,q,i3=1,ctr;
  scanf("%d",&p);
  while(p--)
  {
  char n[100];
  char n1[100];    
  scanf(" %s",n);
  int c=0;
    for(q=0;q<strlen(n);q++)
    {
      if(n[q]=='4')
      {
        n[q]='3';
        n1[q]='1';
        if(c==0)
    ctr=q;
        c++;
      }
      else
      n1[q]='0';
    }
    printf("Case #%d: %s ",i3++,n);
    int i2;
  for(i2=ctr;i2<strlen(n);i2++)
    {
      printf("%c",n1[i2]);
    }
    printf("\n");
  }
}