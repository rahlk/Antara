#include<stdio.h>
#include<string.h>
int main()
{
  int x,i,j=1;
  scanf(" %d",&x);
  char a[100000];
  while(x--)
  {
    int y;
    scanf(" %d",&y);
    scanf(" %s",a);
    printf("Case #%d: ",j++);
    for( i=0;i<strlen(a);i++)
    {
        
      if(a[i]=='S')
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