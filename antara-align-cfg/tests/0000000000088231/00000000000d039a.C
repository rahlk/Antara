#include<stdio.h>
#include<string.h>
int main()
{
  int l,i,i3=1,ctr;
  scanf("%d",&l);
  while(l--)
  {
  char a[100];
  char n1[100];    
  scanf(" %s",a);
  int c=0;
    for(i=0;i<strlen(a);i++)
    {
      if(a[i]=='4')
      {
        a[i]='3';
        n1[i]='1';
        if(c==0)
    ctr=i;
        c++;
      }
      else
      n1[i]='0';
    }
    printf("Case #%d: %s ",i3++,a);
    int i2;
  for(i2=ctr;i2<strlen(a);i2++)
    {
      printf("%c",n1[i2]);
    }
    printf("\n");
  }
}