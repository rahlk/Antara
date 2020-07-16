#include<stdio.h>
#include<string.h>
int main()
{
  int test_case,i,i3=1,c;
  scanf("%d",&test_case);
  while(test_case--)
  {
  char a[100];
  char a1[100];    
  scanf(" %s",a);
  int x=0;
    for(i=0;i<strlen(a);i++)
    {
      if(a[i]=='4')
      {
        a[i]='3';
        a1[i]='1';
        if(x==0)
    c=i;
        x++;
      }
      else
      a1[i]='0';
    }
    printf("Case #%d: %s ",i3++,a);
    int i2;
  for(i2=c;i2<strlen(a);i2++)
    {
      printf("%c",a1[i2]);
    }
    printf("\n");
  }
}