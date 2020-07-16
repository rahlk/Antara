#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() 
{
  int T; 
  scanf("%d", &T);
  for (int id = 1; id <= T; ++id) 
  {
	int N,i=0;
	scanf("%d",&N);
	char p[(2*N)-1];
	scanf("%s",p);
	printf("Case #%d: ",id);
    while(p[i]!='\0')
    {
        if(p[i]=='S')
        printf("E");
        else
        printf("S");
        i++;
    }
    printf("\n");
  }
  return 0;
}