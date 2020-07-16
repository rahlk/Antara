#include<stdio.h>
#include<string.h>
int main()
{
  int a,i,k=1,b;
  scanf("%d",&a);
  while(a--)
  {
  char n[100];
  char m[100];    
  scanf(" %s",n);
  int c=0;
    for(i=0;i<strlen(n);i++)
    {
      if(n[i]=='4')
      {
        n[i]='3';
        n1[i]='1';
        if(c==0)
    b=i;
        c++;
      }
      else
      m[i]='0';
    }
    printf("Case #%d: %s ",k++,n);
    int j;
  for(j=ctr;j<strlen(n);j++)
    {
      printf("%c",m[j]);
    }
    printf("\n");
  }
}