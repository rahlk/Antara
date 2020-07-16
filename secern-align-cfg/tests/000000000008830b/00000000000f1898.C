#include<stdio.h>
#define MAX_N (100)
#define MAX_ELEMS (101)
void seperate_letters(const unsigned int en_ctxt[], unsigned int ctxt_elms[], unsigned int ctxt_size, unsigned int max_prime);
unsigned char is_it_prime(unsigned int data);
void selection_sort(unsigned int array[], const unsigned int size);
void swap(unsigned int *d1, unsigned int *d2);
void remove_dups(unsigned int s_ctxt_elms[], unsigned int ctxt_size);
void retrieve_ptxt(const unsigned int s_ctxt_elms[], unsigned int ctxt_elms[], unsigned int ctxt_size, char output[]);

int main()
{
	unsigned int i, j, test_case, ctxt_size;
	unsigned int max_prime;      		  // long double better
	scanf("%u", &test_case);
	unsigned int en_ctxt[MAX_N]={0};		  // long double better
	unsigned int ctxt_elms[MAX_ELEMS]={0};    // long double better
	unsigned int s_ctxt_elms[MAX_ELEMS]={0};  // long double better
	char output[MAX_ELEMS];
	for (i = 1; i <= test_case; i++)
	{
		scanf("%u",&max_prime);
		scanf("%u",&ctxt_size);
		
		for(j=0;j<ctxt_size;j++)
		{
			scanf("%u",&en_ctxt[j]);
		}
		/*for(j=0;j<ctxt_size;j++)
		{
			printf("%u ",en_ctxt[j]);
		}
		putchar('\n');*/
		seperate_letters(en_ctxt, ctxt_elms, ctxt_size, max_prime);
		/*for(j=0;j<=ctxt_size;j++)
		{
			printf("%u ",ctxt_elms[j]);
		}
		putchar('\n');*/
		for(j=0;j<=ctxt_size;j++)
		{
			s_ctxt_elms[j] = ctxt_elms[j];
		}
		selection_sort(s_ctxt_elms, (ctxt_size+1));
		/*for(j=0;j<=ctxt_size;j++)
		{
			printf("%u ",s_ctxt_elms[j]);
		}
		putchar('\n');*/
		remove_dups(s_ctxt_elms, ctxt_size);
		/*for(j=0;j<ctxt_size;j++)
		{
			printf("%u ",s_ctxt_elms[j]);
		}
		putchar('\n');*/
		retrieve_ptxt(s_ctxt_elms, ctxt_elms, (ctxt_size+1),output);
		/*for(j=0;j<ctxt_size;j++)
		{
			printf("%u ",en_ctxt[j]);
		}*/
		printf("Case #%u: %s\n",i,output);
	}	
	return (int)0;
}

unsigned char is_it_prime(unsigned int data)
{
	unsigned char success;
	unsigned int m, i, j, l,count;
	unsigned int k[10000]={0};
	l = 0;
	for (i = 1; i <= data; i++)
	{
		count = 0;
		m = 0;
		for (j = 1; ((count <= 1) && (j <= (i / 2)));)
		{
			if ((i%j) == 0)
			{
				count++;
			}
			if (m < l)
			{
				j = k[m++];
			}
			else
			{
				break;
			}
		}
		if (count == 1)
		{
			k[l] = i;
			l++;
		}
	}
	count = 0;
	for(i=0;((i<l) && (count <= 1));i++)
	{
		if((data%k[i]) == 0)
		{
			count++;
		}	
	}
	if(count ==1)
	{
		success = 1;
	}
	else
	{
		success = 0;
	}
	
	return success;
}

void seperate_letters(const unsigned int en_ctxt[], unsigned int ctxt_elms[], unsigned int ctxt_size, unsigned int max_prime)
{
	/*printf("Came to seperate letters\n");*/
	unsigned int m, i, j, l,count,quoti,rt;
	unsigned int k[10000]={0};
	unsigned char success;
	l = 0;
	for (i = 1; i <= max_prime; i++)
	{
		count = 0;
		m = 0;
		for (j = 1; ((count <= 1) && (j <= (i / 2)));)
		{
			if ((i%j) == 0)
			{
				count++;
			}
			if (m < l)
			{
				j = k[m++];
			}
			else
			{
				break;
			}
		}
		if (count == 1)
		{
			k[l] = i;
			l++;
		}
	}
	success= 0;
	rt=0;
	
	for(j=0;(j<l && !success);j++)
	{
		if((en_ctxt[0]%k[j]) == 0)
		{
			quoti = en_ctxt[0]/k[j];
			success = is_it_prime(quoti);
			if(success)
			{
				if((en_ctxt[1]%k[j]) == 0)
				{
					ctxt_elms[rt] = quoti;
					rt++;
					ctxt_elms[rt] = k[j];
					rt++;
				}
				else
				{
					ctxt_elms[rt] = k[j];
					rt++;
					ctxt_elms[rt] = quoti;
					rt++;					
				}
			}
		}
	}
	for(;rt<=(ctxt_size);rt++)
	{
		ctxt_elms[rt] = en_ctxt[rt-1] / ctxt_elms[rt-1];
	}
}

void selection_sort(unsigned int array[], const unsigned int size)
{
	/*printf("Sorting ... \n");*/
	unsigned int i, j;
	unsigned int choose = 1;
	if (choose)  /* Ascending */
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				if (array[i] > array[j])
				{
					swap(&array[i], &array[j]);
				}
			}
		}
	}
	else /* Descending */
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				if (array[i] < array[j])
				{
					swap(&array[i], &array[j]);
				}
			}
		}
	}
}

void swap(unsigned int *d1, unsigned int *d2)
{
	*d1 = *d1 + *d2;
	*d2 = *d1 - *d2;
	*d1 = *d1 - *d2;
}

void remove_dups(unsigned int s_ctxt_elms[], unsigned int ctxt_size)
{
	/*printf("Removing dups...\n");*/
	unsigned int i,j,k,dup;
	unsigned int tmp_s_ctxt_elms[MAX_ELEMS]={0};
	dup=0;
	i=0;
	
	for(k=0;k<(ctxt_size+1);k++)
	{
		j=k+1;
		if(s_ctxt_elms[k] != s_ctxt_elms[j])
		{
			tmp_s_ctxt_elms[i] = s_ctxt_elms[j-1];
			i++;
		}
		else
		{
			dup++;
		}
		
	}
	for(i=0;i<(ctxt_size+1-dup);i++)
	{
		s_ctxt_elms[i] = tmp_s_ctxt_elms[i];
	}
}

void retrieve_ptxt(const unsigned int s_ctxt_elms[], unsigned int ctxt_elms[], unsigned int ctxt_size, char output[])
{
	
	unsigned int i;
	char tmp_char;
	for(i=0;i<MAX_ELEMS;i++)
	{
		output[i]='\0';
	}
	for(i=0;i<ctxt_size;i++)
	{
		if (ctxt_elms[i] == s_ctxt_elms[0])
		{
			tmp_char = 'A';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[1])
		{
			tmp_char = 'B';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[2])
		{
			tmp_char = 'C';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[3])
		{
			tmp_char = 'D';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[4])
		{
			tmp_char = 'E';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[5])
		{
			tmp_char = 'F';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[6])
		{
			tmp_char = 'G';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[7])
		{
			tmp_char = 'H';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[8])
		{
			tmp_char = 'I';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[9])
		{
			tmp_char = 'J';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[10])
		{
			tmp_char = 'K';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[11])
		{
			tmp_char = 'L';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[12])
		{
			tmp_char = 'M';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[13])
		{
			tmp_char = 'N';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[14])
		{
			tmp_char = 'O';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[15])
		{
			tmp_char = 'P';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[16])
		{
			tmp_char = 'Q';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[17])
		{
			tmp_char = 'R';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[18])
		{
			tmp_char = 'S';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[19])
		{
			tmp_char = 'T';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[20])
		{
			tmp_char = 'U';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[21])
		{
			tmp_char = 'V';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[22])
		{
			tmp_char = 'W';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[23])
		{
			tmp_char = 'X';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[24])
		{
			tmp_char = 'Y';
		}
		else if (ctxt_elms[i] == s_ctxt_elms[25])
		{
			tmp_char = 'Z';
		}
		else
		{
			tmp_char = ' ';
		}
		output[i] = tmp_char;
	}
	output[i] = '\0';
}
