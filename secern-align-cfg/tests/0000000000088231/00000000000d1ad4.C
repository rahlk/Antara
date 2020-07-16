#include<stdio.h>
#include<string.h>
int main()
{
  int T,i3=1;
  scanf("%d",&T);
  while(T--)
  {
  char n[100],n1[100];    
  scanf(" %s",n);
  int c=0;
    for(int i=0;i<strlen(n);i++)
    {
      if(n[i]=='4')
      {
        n[i]='3';
        n1[i]='1';
        if(c==0)
   int ctr=i;
        c++;
      }
      else
      n1[i]='0';
    }
    printf("Case #%d: %s ",i3++,n);
  for(int i2=ctr;i2<strlen(n);i2++)
    {
      printf("%c",n1[i2]);
    }
    printf("\n");
  }
}