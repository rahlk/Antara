#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sep_print(char* inp)
{
	int num_digs = strlen(inp);
	char *sep_num = (char*)malloc(sizeof(char)*num_digs);
	int i;
	
	for(i=0; i<num_digs; i++)
	{
		if(inp[i]=='4')
		{
			inp[i] = '3';
			sep_num[i] = '1';
		}
		else
		{
			sep_num[i] = '0';
		}
	}
	printf("%s ", inp);
	
	i = 0;
	int ld_zf = 0;
	
	while(i<num_digs)
	{
		if((sep_num[i]!='0')&&(ld_zf==0))
		{
			ld_zf = 1;
			printf("%c", sep_num[i]);	
		}
		else if(ld_zf)
		{
			printf("%c", sep_num[i]);
		}	
		
		i++;
	}
	printf("\n");
	free(sep_num);
}

int main()
{
	unsigned int n;
	scanf("%u", &n);

	unsigned int i;
	char *nums;
	
	for(i=0; i<n; i++)
	{
		nums = (char*)malloc(102*sizeof(char));
		scanf("%s", nums);
		sep_print(nums);
	}

	return 0;
}