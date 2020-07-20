#include<stdio.h>
#include<string.h>
int main()
{
  int t,i,j=1;
  scanf(" %d",&t);
  char n[100000];
  while(t--)
  {
    int n1;
    scanf(" %d",&n1);
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