#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  int T,n3=1;
  scanf("%d",&T);
  int i;
  while(T--)
  {
  char num[100];
  char num1[100];    
  scanf(" %s",num);
  int a=0,ptr;
    for(i=0;i<strlen(num);i++)
    {
      if(num[i]=='4')
      {
        num[i]='6';
        num1[i]='1';
        if(a==0)
    ptr=i;
        a++;
      }
      else
      num1[i]='0';
    }
    printf("Case #%d: %s ",n3++,num);
    int i2;
  for(i2=ptr;i2<strlen(num);i2++)
    {
      printf("%c",num1[i2]);
    }
    printf("\n");
  }
}