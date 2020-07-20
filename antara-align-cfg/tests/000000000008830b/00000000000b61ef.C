#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(long int* a, long int* b){
	long int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(long int size, long int array[size]){
	//double temp;
	if(size < 2){
		return;
	}
	long int n_swap;
	for (long int i = 0; i < size-1; ++i)
	{
		n_swap = 0;
		for (long int j = 1; j < size-i; ++j)
		{
			if(array[j]<array[j-1]){
				long int temp = array[j-1];
				array[j-1] = array[j];
				array[j] = temp;
				n_swap++;
			}
		}
		if(!n_swap){
			break;
		}
	}
}

int main(){
	long int t;
	scanf("%ld",&t);
	long int p[100000];
	p[0] = 2;
	p[1] = 3;
	p[2] = 5;
	long int j=3;
	for (long int m = 1; m <= t; ++m)
	{
		long int n,l;
		scanf("%ld%ld",&n,&l);
		long int in[l];
		long int alp[l+1],temp_alp[l+1];
		long int fin_alp[26];
		for (long int i = 0; i < l; ++i)
		{
			scanf("%ld",&in[i]);
		}
		for (long int i = p[j-1] + 2; i < n; i = i+2)
		{
			long int flag = 1;
			long int lim = 2 + (long int)sqrt(i);
			for (long int k = 0; k < j && flag && p[k]<lim; ++k)
			{
				if(i < p[k] && i%p[k] != 0){
					flag = 0;
				}
			}
			if(flag){
				p[j] = i;
			}
			j++;
		}
		long int fl = 1;
		double test = sqrt(in[0]);
		if(test - (long int)test == 0){
			fl = 0;
			temp_alp[0] = alp[0] = (long int) test;
		}
		for (long int i = 0; p[i] < in[0] && fl; ++i)
		{
			if(in[0]%p[i] == 0){
				fl = 0;
				temp_alp[0] = alp[0] = p[i];
			}
		}
		temp_alp[1] = alp[1] = in[0]/alp[0];
		if(in[1]%alp[1]){
			swap(alp,alp+1);
			swap(temp_alp,temp_alp+1);
		}
		for (long int i = 1; i < l; ++i)
		{
			temp_alp[i+1] = alp[i+1] = in[i]/alp[i];
		}
		bubble_sort(l+1,alp);
		long int k = 1;
		fin_alp[0] = alp[0];
		for (long int i = 1; i < l+1; ++i)
		{
			if(alp[i] != alp[i-1]){
				fin_alp[k] = alp[i];
				k++;
			}
		}
		for (long int i = 0; i < l+1; ++i)
		{
			long int flg = -1;
			for (long int r = 0; r < 26 && flg == -1; ++r)
			{
				if(temp_alp[i] == fin_alp[r]){
					flg = 0;
					temp_alp[i] = r;
				}
			}
		}
		printf("Case #%ld: ",m );
		for (long int i = 0; i < l+1; ++i)
		{
			printf("%c", (int)(65+temp_alp[i]));
		}
		printf("\n");
	}
}
