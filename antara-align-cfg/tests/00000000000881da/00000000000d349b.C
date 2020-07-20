#include<stdio.h>
#include<string.h>
int main()
{
  int a,i,k=1;
  scanf(" %d",&a);
  char n[100000];
  while(t--)
  {
    int l;
    scanf(" %d",&l);
    scanf(" %s",n);
    printf("Case #%d: ",k++);
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
    
    
    
    
    
    