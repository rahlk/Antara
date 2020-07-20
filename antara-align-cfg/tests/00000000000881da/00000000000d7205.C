#include<stdio.h>
#include<string.h>
int main()
{
  int a,i,i2=1;
  scanf(" %d",&a);
  char n[100000];
  while(a--)
  {
    int p;
    scanf(" %d",&p);
    scanf(" %s",n);
    printf("Case #%d: ",i2++);
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