#include<stdio.h>
#include<string.h>
int main()
{
  int t,m,i3=1,ctr;
  scanf("%d",&t);
  while(t--)
  {
  char n[100];
  char n1[100];    
  scanf(" %s",n);
  int c=0;
    for(m=0;m<strlen(n);m++)
    {
      if(n[m]=='4')
      {
        n[m]='3';
        n1[m]='1';
        if(c==0)
    ctr=m;
        c++;
      }
      else
      n1[m]='0';
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