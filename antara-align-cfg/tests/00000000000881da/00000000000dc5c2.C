#include<stdio.h>
#include<string.h>
int main()
{
  int test,i,c=1;
  scanf(" %d",&test);
  char arr[100000];
  while(test--)
  {
    int rt;
    scanf(" %d",&rt);
    scanf(" %s",arr);
    printf("Case #%d: ",c++);
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