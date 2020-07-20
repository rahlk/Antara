#include<stdio.h>
#include<string.h>
int main()
{
  int p,i,i5=1;
  scanf(" %d",&p);
  char n[100000];
  while(p--)
  {
    int r;
    scanf(" %d",&r);
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