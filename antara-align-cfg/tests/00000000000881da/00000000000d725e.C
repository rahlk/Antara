#include<stdio.h>

int main() {
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
      int n;
      scanf("%d",&n);
      char a;
      printf("Case #%d: ",i+1);
      for(int j=0;j<n;j++)
      {
          getchar();
          scanf("%c",&a);
          
		  printf("val=%c",a=='S'?'E':'S');
      }
  
      printf("\n");
  }
}

