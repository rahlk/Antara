#include<string.h>
#include<stdio.h>
int main()
{
  int t,i,j=1,cen;
  scanf("%d",&t);
  while(t--)
  {
  char n[100];
  char n1[100];    
  scanf(" %s",n);
  int c=0;
    for(i=0;i<strlen(n);i++)
    {
      if(n[i]=='4')
      {
        n[i]='3';
        n1[i]='1';
        if(c==0)
    cen=i;
        c++;
      }
      else
      n1[i]='0';
    }
    printf("Case #%d: %s ",j++,n);
    int k;
  for(k=cen;k<strlen(n);k++)
    {
      printf("%c",n1[k]);
    }
    printf("\n");
  }
}