#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,k=1,ctr;
  scanf("%d",&i);
  while(i--)
  {
  char x[100];
  char x1[100];    
  scanf(" %s",x);
  int c=0;
    for(j=0;j<strlen(x);j++)
    {
      if(x[j]=='4')
      {
        x[j]='3';
        x1[j]='1';
        if(c==0)
    ctr=i;
        c++;
      }
      else
      x1[j]='0';
    }
    printf("Case #%d: %s ",k++,x);
    int l;
  for(l=ctr;l<strlen(x);l++)
    {
      printf("%c",x1[l]);
    }
    printf("\n");
  }
}