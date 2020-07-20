#include<stdio.h>
#include<string.h>
int main()
{
  int m,i,k=1,n;
  scanf("%d",&m);
  while(m--)
  {
  char a[100];
  char b[100];    
  scanf(" %s",b);
  int c=0;
    for(i=0;i<strlen(b);i++)
    {
      if(b[i]=='4')
      {
        b[i]='3';
        a[i]='1';
        if(c==0)
    n=i;
        c++;
      }
      else
      a[i]='0';
    }
    printf("Case #%d: %s ",k++,b);
    int j;
  for(j=n;j<strlen(b);j++)
    {
      printf("%c",a[j]);
    }
    printf("\n");
  }
}