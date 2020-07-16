#include<stdio.h>
#include<string.h>
int main()
{
  int x,i,i5=1;
  scanf(" %d",&x);
  char n[100000];
  while(x--)
  {
    int v;
    scanf(" %d",&v);
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