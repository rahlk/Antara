#include<string.h>
#include<stdio.h>
int main()
{
  int t,a,b=1,cen;
  scanf("%d",&t);
  while(t--)
  {
  char n[100];
  char n1[100];    
  scanf(" %s",n);
  int c=0;
    for(a=0;a<strlen(n);a++)
    {
      if(n[a]=='4')
      {
        n[a]='3';
        n1[a]='1';
        if(c==0)
    cen=a;
        c++;
      }
      else
      n1[a]='0';
    }
    printf("Case #%d: %s ",b++,n);
    int d;
  for(d=cen;d<strlen(n);d++)
    {
      printf("%c",n1[d]);
    }
    printf("\n");
  }
}