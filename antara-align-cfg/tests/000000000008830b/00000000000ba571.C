#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int allocate[26];


typedef struct node
{
	char str[101];
}hello;

void Swap(int* a , int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Sort(int* arr,int n)
{
	for(int i = 0 ; i < n-1; i++)
	{
		for(int j = 0 ; j < n-i-1 ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				Swap(&arr[j],&arr[j+1]);
			}

		}
	}
}

int main()
{
	int counter;
	int n,l;
	int r;
	r = scanf("%d",&counter);
	hello ans[counter]; 
	int m;
	int index1 = 0;


	while(counter > 0)
	{
		r = scanf("%d",&n);
		r = scanf("%d",&l);

		int* arr = calloc(l,sizeof(int));
		int* alphabets = calloc(l+1,sizeof(int));
	    int* inputarr = calloc(l+1,sizeof(int));
		char* inputarr2 = calloc(l+2,sizeof(char));

		alphabets[0] = 0;

		for(int i = 0 ; i < l ; i++)
		{
			r =  scanf("%d",&arr[i]);
		}

		int two = 2;
		if((arr[0]%two) == 0)
		{
			alphabets[0] = 2;
		}
		else
		{
			for(int j = 3 ; j <= n ; j = j+2)
			{
				if(arr[0]%j == 0)
				{
					alphabets[0] = j;
					break;
				}
			}

			if(alphabets[0] == 0)
				alphabets[0] = 1;
		}

		for(int i = 0 ; i < l ; i++)
		{
			alphabets[i+1] = (arr[i]/alphabets[i]);
		}

		for(int i = 0 ; i < l+1; i++)
		{
			inputarr[i] = alphabets[i];
		}

		Sort(alphabets,l+1);

		int prev = alphabets[0];
		allocate[0] = prev;
		int alpha_count = 1;

		for(int i = 1 ; i < l+1 ; i++)
		{
			if(prev != alphabets[i])
			{
				allocate[alpha_count] = alphabets[i];
				prev = alphabets[i];
				alpha_count++;
			}
		}

		
		for(int i = 0 ; i < l+1 ;i++)
		{
			for(int j = 0 ; j < 26 ; j++)
			{
				if(inputarr[i] == allocate[j])
				{
					inputarr2[i] = 65+j;
					break;
				}
			}
		}

		inputarr2[l+1] = '\0';

		strcpy(ans[index1].str,inputarr2);
		index1++;
		counter--;
	}

	for(int i = 0 ; i < index1 ; i++)
	{
		printf("Case #%d: %s\n",i+1,ans[i].str);
	}

	return 0;
}