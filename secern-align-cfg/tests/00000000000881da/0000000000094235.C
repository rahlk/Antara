#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sep_print(char* inp, int cnum)
{
	int num_digs = strlen(inp);
	int i = 0;
	
	printf("Case #%d: ", cnum);
	
	while(i<num_digs)
	{
		if(inp[i]=='S')
		{
			printf("E");
        }
        else
        {
            printf("S");
        }
		i++;
	}
	printf("\n");
}

int main()
{
	unsigned int n;
	scanf("%u", &n);

	unsigned int i;
    unsigned int j;
	char *nums;
	
	for(i=0; i<n; i++)
	{
        scanf("%u", &j);
		nums = (char*)malloc((2*j-2)*sizeof(char));
		scanf("%s", nums);
		sep_print(nums, i+1);
	}

	return 0;
}