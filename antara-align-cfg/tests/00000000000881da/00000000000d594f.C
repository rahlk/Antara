#include<stdio.h>
#include<string.h>
int main()
{
  int a,i,i5=1;
  scanf(" %d",&a);
  char b[100000];
  while(a--)
  {
    int c;
    scanf(" %d",&c);
    scanf(" %s",b);
    printf("Case #%d: ",i5++);
    for( i=0;i<strlen(b);i++)
    {
        
      if(b[i]=='S')
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