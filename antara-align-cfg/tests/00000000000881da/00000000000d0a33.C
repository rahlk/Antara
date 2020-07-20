#include<stdio.h>
#include<string.h>
int main()
{
  int t,m,i5=1;
  scanf(" %d",&t);
  char n[100000];
  while(t--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",n);
    printf("Case #%d: ",i5++);
    for( m=0;m<strlen(n);m++)
    {
        
      if(n[m]=='S')
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