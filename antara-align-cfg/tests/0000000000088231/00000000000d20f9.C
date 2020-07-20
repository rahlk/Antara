#include<stdio.h>
#include<string.h>
int main()
{
  int t,i,k=1,ctr;
  scanf("%d",&t);
  while(t--)
  {
  char a[100];
  char a1[100];    
  scanf(" %s",a);
  int c=0;
    for(i=0;i<strlen(a);i++)
    {
      if(a[i]=='4')
      {
        a[i]='3';
        a1[i]='1';
        if(c==0)
    ctr=i;
        c++;
      }
      else
      a1[i]='0';
    }
    printf("Case #%d: %s ",k++,a);
    int j;
  for(j=ctr;j<strlen(a);j++)
    {
      printf("%c",a1[j]);
    }
    printf("\n");
  }
}