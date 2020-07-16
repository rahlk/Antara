#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{

 int i, j, T, N;
 char s[50009];
 scanf("%d",&T);
 for(i=1;i<=T;i++)
 {
 	 scanf("%d",&N);
	 getchar();
	 scanf("%s",s);
	 printf("Case #%d: ",i);
	 for(j=0;j<2*(N-1);j++)
	 	if(s[j]=='S')
	 		printf("E");
	 	else
	 		printf("S");
	printf("\n");	
 }

 return 0;
}
