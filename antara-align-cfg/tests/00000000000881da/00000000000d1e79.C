#include<string.h>
int main()
{
  int kp,p1,p3=1;
  scanf(" %d",&kp);
  char n[100000];
  while(kp--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",n);
    printf("Case #%d: ",p3++);
    for( p1=0;p1<strlen(n);p1++)
    {
        
      if(n[p1]=='S')
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