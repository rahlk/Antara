#include<stdio.h>
#include<string.h>
int main()
{
  int n,s,s5=1;
  scanf(" %d",&n);
  char r[100000];
  while(n--)
  {
    int d;
    scanf(" %d",&d);
    scanf(" %s",r);
    printf("Case #%d: ",s5++);
    for( s=0;s<strlen(r);s++)
    {
        
      if(r[s]=='S')
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