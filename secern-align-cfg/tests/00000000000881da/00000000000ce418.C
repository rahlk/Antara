#include<stdio.h>
#include<string.h>
int main()
{
  int t,a,a5=1;
  scanf(" %d",&t);
  char n[100000];
  while(t--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",n);
    printf("Case #%d: ",a5++);
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