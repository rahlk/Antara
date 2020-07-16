#include <stdio.h>
void main(){
	int t,n,p,i,c=1;
	char str[1000];
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
