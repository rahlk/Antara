#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
	long long counter;
	long long n;
	long r = scanf("%lld",&counter);
	long long index1 = 0;
	

	while(counter > 0)
	{
		r = scanf("%lld",&n);
		char* str1  = (char*)calloc(2*n-1,sizeof(char));
		r = scanf("%s",str1);
		
		for(long i = 0 ; i < 2*n-2 ; i++)
		{
			if(str1[i] == 'E')
			{
				str1[i] = 'S';
			}
			else
			{
				str1[i] = 'E';
			}
		}

		printf("Case #%lld: %s\n",index1+1,str1);
		fflush(stdout);
		
		index1++;		
		counter--;
	}
	return 0;
}