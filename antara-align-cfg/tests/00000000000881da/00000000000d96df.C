#include <stdio.h>
	char str[1000];

void main(){
	int t,n,p,i,c=1;
	scanf("%d",&t);
	
	while(t--){
		scanf("%d",&n);
		scanf("%s",str);
		i=0;
		printf("Case #%d: ",c);
		while (str[i]!='\0')
		{
			
			if (str[i]=='S')
				{
				printf("E")	;
				}
			else
			printf("S");	
			i++;
			}
					printf("\n");
					c++;

		}
	}
