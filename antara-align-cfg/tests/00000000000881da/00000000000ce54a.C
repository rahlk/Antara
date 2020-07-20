#include<stdio.h>
int main()
{
  int n,t,i,j;
  char s[1000];
  scanf("%d", &t);
 
  for(i=0;i<t;i++)
  {
      scanf("%d", &n);
      scanf("%s", s);
      
      printf("Case #%d= ", i+1);
      for(j=0;j<(2*n)-2;j++)
      {
          if(s[j]=='S')
            printf("E");
          if(s[j]=='E')
            printf("S");
      }
      printf("\n");
  }
  return 0;
}  