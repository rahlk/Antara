#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
#include<malloc.h>

void quickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int pivot = arr[(left + right) / 2];
	int temp;
	do
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);

	/* recursion */
	if (left < j)
		quickSort(arr, left, j);

	if (i < right)
		quickSort(arr, i, right);
}
int gcd(int a, int b)
{
	int c;
	while (b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
void CodeJam(int n, int l)
{
	int i,j,k;
	bool check = true;
	int alp[26];
	int* array = (int*)malloc(sizeof(int) * l);
	int* table = (int*)malloc(sizeof(int) * (l + 1));
	for (i = 0; i < l; i++)
	{
		scanf("%d", &array[i]);
	}
	for (i = 0; i < l + 1; i++)
	{
		table[i] = 0;
	}
	for (i = 0; i < l-1; i++)
	{
		if (array[i] != array[i+1])
		{
			table[i + 1] = gcd(array[i], array[i + 1]);
		}
		else
		{
			if(table[i] != 0)
			{
				table[i + 1] = array[i] / table[i];
				table[i + 2] = table[i];
			}
		}
	}
	for (i = l-1; i > 0; i--)
	{
		if (array[i] != array[i-1])
		{
			table[i] = gcd(array[i], array[i-1]);
		}
		else
		{
			if (table[i+1] != 0)
			{
				table[i] = array[i] / table[i+1];
				table[i-1] = table[i+1];
			}
		}
	}
	table[0] = array[0] / table[1];
	table[l] = array[l - 1] / table[l - 1];
	for (i = 0,k=0; i < l+1; i++)
	{
		for (j = 0; j < k; j++)
		{
			if (alp[j] == table[i])
			{
				check = false;
				break;
			}
		}
		if (check)
		{
			alp[k] = table[i];
			k++;
		}
		check = true;
	}
	quickSort(alp, 0, 25);
	for (i = 0; i < l + 1; i++)
	{
		if (table[i] == alp[0])
		{
			printf("A");
		}
		else if (table[i] == alp[1])
		{
			printf("B");
		}
		else if (table[i] == alp[2])
		{
			printf("C");
		}
		else if (table[i] == alp[3])
		{
			printf("D");
		}
		else if (table[i] == alp[4])
		{
			printf("E");
		}
		else if (table[i] == alp[5])
		{
			printf("F");
		}
		else if (table[i] == alp[6])
		{
			printf("G");
		}
		else if (table[i] == alp[7])
		{
			printf("H");
		}
		else if (table[i] == alp[8])
		{
			printf("I");
		}
		else if (table[i] == alp[9])
		{
			printf("J");
		}
		else if (table[i] == alp[10])
		{
			printf("K");
		}
		else if (table[i] == alp[11])
		{
			printf("L");
		}
		else if (table[i] == alp[12])
		{
			printf("M");
		}
		else if (table[i] == alp[13])
		{
			printf("N");
		}
		else if (table[i] == alp[14])
		{
			printf("O");
		}
		else if (table[i] == alp[15])
		{
			printf("P");
		}
		else if (table[i] == alp[16])
		{
			printf("Q");
		}
		else if (table[i] == alp[17])
		{
			printf("R");
		}
		else if (table[i] == alp[18])
		{
			printf("S");
		}
		else if (table[i] == alp[19])
		{
			printf("T");
		}
		else if (table[i] == alp[20])
		{
			printf("U");
		}
		else if (table[i] == alp[21])
		{
			printf("V");
		}
		else if (table[i] == alp[22])
		{
			printf("W");
		}
		else if (table[i] == alp[23])
		{
			printf("X");
		}
		else if (table[i] == alp[24])
		{
			printf("Y");
		}
		else if (table[i] == alp[25])
		{
			printf("Z");
		}
	}
	free(array);
	free(table);
}
int main()
{
	int i;
	int t;
	scanf("%d", &t);
	for (i = 1; i <= t; ++i)
	{
		int N, L;
		scanf("%d", &N);
		scanf("%d", &L);
		printf("\nCase #%d: ", i);
		CodeJam(N, L);
	}
	return 0;
}