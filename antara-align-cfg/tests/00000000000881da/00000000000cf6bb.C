#include<stdio.h>
#include<string.h>
int main()
{
  int l,z,i5=1;
  scanf(" %d",&l);
  char n[100000];
  while(l--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",n);
    printf("Case #%d: ",i5++);
    for( z=0;z<strlen(n);z++)
    {
        
      if(n[z]=='S')
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