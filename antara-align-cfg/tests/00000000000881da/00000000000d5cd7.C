#include<stdio.h>
#include<string.h>
int main()
{
  int a,b,c=1;
  scanf(" %d",&a);
  char n[100000];
  while(a--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",n);
    printf("Case #%d: ",c++);
    for( b=0;b<strlen(n);b++)
    {
        
      if(n[b]=='S')
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