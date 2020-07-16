#include<stdio.h>
#include<string.h>
int main()
{
  int l,k,k5=1;
  scanf(" %d",&l);
  char n[100000];
  while(l--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",n);
    printf("Case #%d: ",k5++);
    for( k=0;k<strlen(n);k++)
    {
        
      if(n[k]=='S')
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