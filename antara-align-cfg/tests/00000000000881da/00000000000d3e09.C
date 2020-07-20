#include<stdio.h>
#include<string.h>
int main()
{
  int f,r,i5=1;
  scanf(" %d",&f);
  char n[100000];
  while(f--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",n);
    printf("Case #%d: ",i5++);
    for( r=0;r<strlen(n);r++)
    {
        
      if(n[r]=='S')
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