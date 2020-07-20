#include<stdio.h>
#include<string.h>
int main()
{
  int w,r,i3=1,abc;
  scanf("%d",&w);
  while(w--)
  {
  char a[100];
  char n1[100];    
  scanf(" %s",a);
  int c=0;
    for(r=0;r<strlen(a);r++)
    {
      if(a[r]=='4')
      {
        a[r]='3';
        n1[r]='1';
        if(c==0)
    abc=r;
        c++;
      }
      else
      n1[r]='0';
    }
    printf("Case #%d: %s ",i3++,a);
    int r2;
  for(r2=abc;r2<strlen(a);r2++)
    {
      printf("%c",n1[r2]);
    }
    printf("\n");
  }
}