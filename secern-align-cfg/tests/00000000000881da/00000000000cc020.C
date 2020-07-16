#include<stdio.h>
#define MAX_STR_SIZE (100000)

unsigned int record_l_path(unsigned int l_path[], char l_path_string[], unsigned int grid_size);

int main()
{
	unsigned int i,j,test_case, grid_size, len;
	char l_path_string[MAX_STR_SIZE];
	char my_path_string[MAX_STR_SIZE];
	unsigned int l_path[MAX_STR_SIZE]={0};
	unsigned int m_path[MAX_STR_SIZE]={0};
	char to_be_executed;
	scanf("%u", &test_case);
	for (i = 1; i <= test_case; i++)
	{
		scanf("%u", &grid_size);
		//printf("grid = %u\n",grid_size);
		
		scanf("%s", l_path_string, MAX_STR_SIZE);
		//printf("l_path_string = %s\n", l_path_string);
		len = record_l_path(l_path, l_path_string, grid_size);
		
		/*for(j=0;j<len;j++)
		{
			printf("%u ",l_path[j]);
		}*/
		//printf("len = %u\n",len);
		if(l_path_string[0] == 'E')
		{
			my_path_string[0] = 'S';
			to_be_executed = 'E';
			m_path[0] += grid_size;
		}
		else
		{
			my_path_string[0] = 'E';
			to_be_executed = 'S';
			m_path[0] += 1;
		}
		j = 1;
		
		while (j < len)
		{
			m_path[j] = m_path[j-1];
			my_path_string[j] = to_be_executed;
			m_path[j] += ((to_be_executed == 'E')?(1):(grid_size));
			if(m_path[j] == l_path[j])
			{
				if(l_path_string[j+1] == 'E')
				{
					to_be_executed = 'S';
				}
				else
				{
					to_be_executed = 'E';
				}
			}
			else
			{
				if(to_be_executed == 'E')
				{
					to_be_executed = 'S';
				}
				else
				{
					to_be_executed = 'E';
				}
			}
			j++;
		}
		my_path_string[j] = '\0';
		printf("Case #%u: %s\n", i,my_path_string);
	}
}

unsigned int record_l_path(unsigned int l_path[], char l_path_string[], unsigned int grid_size)
{
	unsigned int len,i,l_path_last = 0;
	for (len = 0; l_path_string[len] != '\0';len++); // Length of string
	for(i=0;i<len;i++)
	{
		l_path[i] = l_path_last;
		if(l_path_string[i] == 'E')
		{
			l_path[i] += 1;
		}
		else
		{
			l_path[i] += grid_size;
		}
		l_path_last = l_path[i];
	}
	return len;
}