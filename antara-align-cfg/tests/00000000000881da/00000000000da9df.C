#include<stdio.h>
#include<string.h>
int main()
{
  int T;
  scanf(" %d",&T);
  char a[100000];
  int i,i2=1;
  while(T--)
  {
    int b;
    scanf(" %d",&b);
    scanf(" %s",a);
    printf("Case #%d: ",i2++);
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