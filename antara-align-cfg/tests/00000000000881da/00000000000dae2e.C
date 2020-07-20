#include<stdio.h>
#include<string.h>
int main()
{
  int h,p,p5=1;
  scanf(" %d",&h);
  char t[100000];
  while(h--)
  {
    int n;
    scanf(" %d",&n);
    scanf(" %s",t);
    printf("Case #%d: ",p5++);
    for( p=0;p<strlen(t);p++)
    {
        
      if(t[p]=='S')
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