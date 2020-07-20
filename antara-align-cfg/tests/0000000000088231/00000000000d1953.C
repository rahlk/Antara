#include<stdio.h>
#include<string.h>
int main()
{
  int x,i,z=1,a;
  scanf("%d",&x);
  while(x--)
  {
  char p[100];
  char q[100];    
  scanf(" %s",p);
  int c=0;
    for(i=0;i<strlen(p);i++)
    {
      if(p[i]=='4')
      {
        p[i]='3';
        q[i]='1';
        if(c==0)
    a=i;
        c++;
      }
      else
      q[i]='0';
    }
    printf("Case #%d: %s ",z++,p);
    int i2;
  for(i2=a;i2<strlen(p);i2++)
    {
      printf("%c",q[i2]);
    }
    printf("\n");
  }
}