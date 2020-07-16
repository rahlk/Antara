#include<stdio.h>
#include<string.h>
int main()
{
  int t1,i1,i5=1;
  scanf(" %d",&t1);
  char n1[100000];
  while(t1--)
  {
    int r1;
    scanf(" %d",&r1);
    scanf(" %s",n1);
    printf("Case #%d: ",i5++);
    for( i1=0;i1<strlen(n1);i1++)
    {
        
      if(n1[i1]=='S')
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