#include<stdio.h>
#include<string.h>
int main()
{
  int h,a,a3=1,ctr;
  scanf("%d",&h);
  while(h--)
  {
  char p[100];
  char p1[100];    
  scanf(" %s",p);
  int t=0;
    for(a=0;a<strlen(p);a++)
    {
      if(p[a]=='4')
      {
        p[a]='3';
        p1[a]='1';
        if(t==0)
    ctr=a;
        t++;
      }
      else
      p1[a]='0';
    }
    printf("Case #%d: %s ",a3++,p);
    int a2;
  for(a2=ctr;a2<strlen(p);a2++)
    {
      printf("%c",p1[a2]);
    }
    printf("\n");
  }
}