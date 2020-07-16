#include<stdio.h>
#include<string.h>
int main()
{
  int test,i,j=1;
  scanf(" %d",&test);
  char arr[100000];
  while(test--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",arr);
    printf("Case #%d: ",j++);
    for( i=0;i<strlen(arr);i++)
    {
        
      if(arr[i]=='S')
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