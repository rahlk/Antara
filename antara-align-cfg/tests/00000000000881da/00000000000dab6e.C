#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
  int test,i,j=1;
  scanf(" %d",&t);
  char a[100000];
  while(test--)
  {
    int res;
    scanf(" %d",&res);
    scanf(" %s",a);
    printf("Case #%d: ",j++);
    for( i=0;i<strlen(a);i++)
    {if(a[i]=='S')
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
  return 0;
}