#include<stdio.h>

int main() {
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
      int n;
      scanf("%d",&n);
      char a[n];
      scanf("%s",a);
	  printf("Case #%d: ",i+1);
      
	  for(int j=0;j<n;j++)
      {
 		  printf("%c",a[j]=='S'?'E':'S');
      }
  
      printf("\n");
  }
}
