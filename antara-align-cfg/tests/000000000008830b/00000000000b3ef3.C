#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int size, int array[size]){
	//double temp;
	if(size < 2){
		return;
	}
	int n_swap;
	for (int i = 0; i < size-1; ++i)
	{
		n_swap = 0;
		for (int j = 1; j < size-i; ++j)
		{
			if(array[j]<array[j-1]){
				int temp = array[j-1];
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
	int t;
	scanf("%d",&t);
	int p[2000];
	p[0] = 2;
	p[1] = 3;
	p[2] = 5;
	int j=3;
	for (int m = 1; m <= t; ++m)
	{
		int n,l;
		scanf("%d%d",&n,&l);
		int in[l];
		int alp[l+1],temp_alp[l+1];
		int fin_alp[26];
		for (int i = 0; i < l; ++i)
		{
			scanf("%d",&in[i]);
		}
		for (int i = p[j-1] + 2; i < n; i = i+2)
		{
			int flag = 1;
			int lim = 2 + (int)sqrt(i);
			for (int k = 0; k < j && flag && p[k]<lim; ++k)
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
		int fl = 1;
		double test = sqrt(in[0]);
		if(test - (int)test == 0){
			fl = 0;
			temp_alp[0] = alp[0] = (int) test;
		}
		for (int i = 0; i < j && fl; ++i)
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
		for (int i = 1; i < l; ++i)
		{
			temp_alp[i+1] = alp[i+1] = in[i]/alp[i];
		}
		bubble_sort(l+1,alp);
		int k = 1;
		fin_alp[0] = alp[0];
		for (int i = 1; i < l+1; ++i)
		{
			if(alp[i] != alp[i-1]){
				fin_alp[k] = alp[i];
				k++;
			}
		}
		for (int i = 0; i < l+1; ++i)
		{
			int flg = -1;
			for (int r = 0; r < 26 && flg == -1; ++r)
			{
				if(temp_alp[i] == fin_alp[r]){
					flg = 0;
					temp_alp[i] = r;
				}
			}
		}
		printf("Case #%d: ",m );
		for (int i = 0; i < l+1; ++i)
		{
			printf("%c", 65+temp_alp[i]);
		}
		printf("\n");
	}
}