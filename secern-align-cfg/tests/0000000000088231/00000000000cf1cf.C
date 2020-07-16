#include<stdio.h>
#include<string.h>
int main()
{
  int a,b,b3=1,num;
  scanf("%d",&a);
  while(a--)
  {
  char n[100];
  char m[100];    
  scanf(" %s",n);
  int c=0;
    for(b=0;b<strlen(n);b++)
    {
      if(n[b]=='4')
      {
        n[b]='3';
        m[b]='1';
        if(c==0)
    	num=b;
        c++;
      }
      else
      m[b]='0';
    }
    printf("Case #%d: %s ",b3++,n);
    int b2;
  for(b2=num;b2<strlen(n);b2++)
    {
      printf("%c",m[b2]);
    }
    printf("\n");
  }
}