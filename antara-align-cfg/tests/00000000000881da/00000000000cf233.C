#include<stdio.h>
#include<string.h>
int main()
{
  int T,i,N=1;
  scanf(" %d",&T);
  char n[100000];
  while(T--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",n);
    printf("Case #%d: ",N++);
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