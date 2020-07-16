#include<stdio.h>
#include<string.h>
int main()
{
  int b,i,i3=1,ctr;
  scanf("%d",&b);
  while(b--)
  {
  char n[100];
  char n1[100];    
  scanf(" %s",n);
  int e=0;
    for(i=0;i<strlen(n);i++)
    {
      if(n[i]=='4')
      {
        n[i]='3';
        n1[i]='1';
        if(e==0)
    ctr=i;
        e++;
      }
      else
      n1[i]='0';
    }
    printf("Case #%d: %s ",i1++,n);
    int i1;
  for(i1=ctr;i1<strlen(n);i1++)
    {
      printf("%c",n1[i1]);
    }
    printf("\n");
  }
}