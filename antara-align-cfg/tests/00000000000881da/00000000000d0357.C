#include<stdio.h>
#include<string.h>
int main()
{
  int l,i,i5=1;
  scanf(" %d",&l);
  char n[100000];
  while(l--)
  {
    int a;
    scanf(" %d",&a);
    scanf(" %s",n);
    printf("Case #%d: ",i5++);
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