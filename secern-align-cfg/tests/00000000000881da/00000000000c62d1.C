#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
	unsigned int nb_test,dimension;
	scanf("%d",&nb_test);
	
	char chaine[100000];
	for (int test=1;test<=nb_test;test++)
	{
		scanf("%d",&dimension);
		scanf("%s",chaine);
		for(int i=0;i<strlen(chaine);i++)
		{
			if(chaine[i]=='E')
				chaine[i]='S';
			else if (chaine[i]=='S')
				chaine[i]='E';
		}
		printf("Case #%d: %s\n",test,chaine);
	}
	return 0;
}