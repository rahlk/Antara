#include<stdio.h>
#include<string.h>
int main()
{
  int p,j,j5=1;
  scanf(" %d",&p);
  char n[100000];
  while(p--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",n);
    printf("Case #%d: ",j5++);
    for( j=0;j<strlen(n);j++)
    {
        
      if(n[j]=='S')
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