#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int allocate[26];


typedef struct node
{
	char str[101];

}hello;

int main()
{
	int counter;
	int n,l;
	int r;
	r = scanf("%d",&counter);
	hello ans[counter]; 
	int index1 = 0;


	while(counter > 0)
	{

		
		r = scanf("%d",&n);
		r = scanf("%d",&l);


		int* arr = (int*)calloc(l,sizeof(int));
		int* alphabets = (int*)calloc(l+1,sizeof(int));
	    int* inputarr = (int*)calloc(l+1,sizeof(int));

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
			for(int j = 3 ; j <= sqrt(arr[0]) ; j = j+2)
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

		int countar = 0 ;

		while(countar < 26)
		{
			int least = 65535;

			for(int i = 0; i < l+1 ; i++)
			{
				if(least > alphabets[i])
				{
					least = alphabets[i];
				}
			}

			for(int i = 0 ; i < l+1 ;i++)
			{
				if(alphabets[i] == least)
				{
					inputarr[i] = countar;
					alphabets[i] = 65535;
				}
			}
		
			countar++;
		}
		printf("Case #%d: ",index1+1);
		for(int i = 0 ; i < l+1 ; i++)
		{
			printf("%c",inputarr[i]+65);
			fflush(stdout);
		}
		printf("\n");

		index1++;
		counter--;
	}
	
	return 0; 

}