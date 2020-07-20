#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int t,i,j,N;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&N);
		char * l_str = (char *)malloc(sizeof(char)*(2*N-1));
		scanf("%s",l_str);
		for(j=0;j<strlen(l_str);j++){
			if(l_str[j] == 'E')
				l_str[j] = 'S';
			else
				l_str[j] = 'E';
		}
		printf("Case #%d: %s\n",i+1,l_str);
		free(l_str);
	}
	return 0;
}