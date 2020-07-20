#include<stdio.h>
#include<string.h>
int main()
{
  int s,a,i5=1;
  scanf(" %d",&s);
  char n[100000];
  while(s--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",n);
    printf("Case #%d: ",i5++);
    for( a=0;a<strlen(n);a++)
    {
        
      if(n[a]=='S')
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