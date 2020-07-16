#include<stdio.h>
#include <stdlib.h>
#include<math.h>


int main(){
	unsigned int nb_test;
	scanf("%d",&nb_test);
	unsigned int nb,a=0,b=0;
	for(int test=1;test<=nb_test;test++)
	{
		scanf("%d",&nb);
		a=nb;
		int i=0;
		while(nb>0)
		{
			if(nb%10==4)
			{
				a=a-(unsigned int) pow(10,i);
				b=b+(unsigned int) pow(10,i);
			}
			i++;
			nb=nb/10;
		}
		printf("Case #%d: %d %d\n",test,a,b);
		a=0;
		b=0;
	}
}