#include<string.h>
int main()
{
  int test,i,ir=1;
  scanf(" %d",&test);
  char num[100000];
  while(test--)
  {
    int ro;
    scanf(" %d",&rp);
    scanf(" %s",num);
    printf("Case #%d: ",ir++);
    for( i=0;i<strlen(num);i++)
    {
        
      if(num[i]=='S')
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