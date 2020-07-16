#include<stdio.h>
#include<string.h>
int main()
{
  int a,i,j=1;
  scanf(" %d",&a);
  char n[100000];
  while(a--)
  {
    int r;
    scanf(" %d",&r);
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