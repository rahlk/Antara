#include<stdio.h>
#include<string.h>
int main()
{
  int s,a,i3=1,ctr;
  scanf("%d",&s);
  while(s--)
  {
  char n[100];
  char n1[100];    
  scanf(" %s",n);
  int c=0;
    for(a=0;a<strlen(n);a++)
    {
      if(n[i]=='4')
      {
        n[a]='3';
        n1[a]='1';
        if(c==0)
    ctr=i;
        c++;
      }
      else
      n1[i]='0';
    }
    printf("Case #%d: %s ",i3++,n);
    int a2;
  for(a2=ctr;a2<strlen(n);a2++)
    {
      printf("%c",n1[a2]);
    }
    printf("\n");
  }
}