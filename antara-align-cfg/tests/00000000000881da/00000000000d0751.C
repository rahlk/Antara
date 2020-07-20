#include<stdio.h>
#include<string.h>
int main()
{
  int t,j,i5=1;
  scanf(" %d",&t);
  char n[100000];
  while(t--)
  {
    int r;
    scanf(" %d",&r);
    scanf(" %s",n);
    printf("Case #%d: ",i5++);
    for( j=0;j<strlen(n);j++)
    {
        if(n[j]=='s')
        {
            printf("E")
            
        }
        else
        {
            printf("S");
        }
    }
    printf("/n")
  }
}