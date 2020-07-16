#include<stdio.h>
#include<string.h>
int main()
{
  int j,i,p=1;
  scanf(" %d",&j);
  char n[100000];
  while(j--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",n);
    printf("Case #%d: ",p++);
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