#include<stdio.h>
#include<string.h>
int main()
{
  int t,a,b=1;
  scanf(" %d",&t);
  char n[100000];
  while(t--)
  {
    int n1;
    scanf(" %d",&n1);
    scanf(" %s",n);
    printf("Case #%d: ",b++);
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