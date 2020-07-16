#include<stdio.h>
#include<string.h>
int main()
{
  int temp,i,j=1,num;
  scanf(" %d",&temp);
  char arr[100000];
  while(temp--)
  {
    scanf(" %d",&num);
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