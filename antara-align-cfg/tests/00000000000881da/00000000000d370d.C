#include<stdio.h>
#include<string.h>
int main()
{
  int t,i,i1=1;
  scanf(" %d",&t);
  char n[100000];
  while(t--)
  {
    int R;
    scanf(" %d",&R);
    scanf(" %s",n);
    printf("Case #%d: ",i1++);
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