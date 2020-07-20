#include<stdio.h>
#include<string.h>
int main()
{
  int k,i,i5=1;
  scanf(" %d",&k);
  char n[100000];
  while(k--)
  {
    int q;
    scanf(" %d",&q);
    scanf(" %s",n);
    printf("Case #%d: ",i5++);
    for( i=0;i<strlen(n);i++)
    {
        
      if(n[i]=='S')
      {
        printf("E");
      }
      else
      {
        printf("S");
      }
    }
    printf("\n");
  }
}