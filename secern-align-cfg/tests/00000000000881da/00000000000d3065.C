#include<stdio.h>
#include<string.h>
int main()
{
  int x,i,j=1;
  scanf(" %d",&x);
  char n[100000];
  while(x--)
  {
    int y;
    scanf(" %d",&y);
    scanf(" %s",n);
    printf("Case #%d: ",j++);
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

