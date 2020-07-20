// Cryptopangrams
#include <stdio.h>
#include <stdlib.h>
void swap(long long int* a, long long int* b) 
{ 
    long long int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
long long int partition (long long int arr[], long long int low, long int high) 
{ 
    long long int pivot = arr[high];    // pivot 
    long long int i = (low - 1);  // Index of smaller element 
  
    for (long long int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(long long int arr[], long long int low, long long int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        long long int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

void merge(long long int arr[], long long int l, long long int m, long long int r) 
{ 
    long long int i, j, k; 
    long long int n1 = m - l + 1; 
    long long int n2 =  r - m; 
  
    /* create temp arrays */
    long long int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(long long int arr[], long long int l, long long int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        long long int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
long long int binarySearch(long long int values[], long long int len, long long int target)
{
    long long int max = (len - 1);
    long long int min = 0;
    
    long long int guess;  // this will hold the index of middle elements
    long long int step = 0;  // to find out in how many steps we completed the search
    
    while(max >= min)
    {
        guess = (max + min) / 2;
        // we made the first guess, incrementing step by 1
        step++;
        
        if(values[guess] ==  target)
        {
         //   printf("Number of steps required for search: %d \n", step);
            return guess;
        }
        else if(values[guess] >  target) 
        {
            // target would be in the left half
            max = (guess - 1);
        }
        else
        {
            // target would be in the right half
            min = (guess + 1);
        }
    }
 
    // We reach here when element is not 
    // present in array
    return -1;
}

long long int mcd ( long long int num1, long long int num2 )
{
	long long int a;
	long long int b;
	long long int r;
	
	if ( num1 > num2 )
	{
		a = num1;
		b = num2;
	}
	else
	{
		a = num2;
		b = num1;
	}
	
	do
	{
		r = b;
		b = a%b;
		a = r;
	} while ( b != 0 );
	
	return r;
}

int main()
{
	long long int t;
	scanf("%lld", &t);
	long long int k = 1;
	do
	{
		
		long long int N;
		long long int L;
		scanf("%lld %lld", &N, &L);
		long long int i, j;
		long long int product[L+1];
		
		for ( i = 0; i < L; ++i )
		{
			scanf("%lld", &product[i]);
		}
		
		long long int alfa[L+1];
		long long int beta[L+1];
		long long int gamma[26];
		
		alfa[1] = mcd(product[0],product[1]);
		beta[1] = alfa[1];
		alfa[0] = product[0]/alfa[1];
		beta[0] = alfa[0];
		for ( i = 2; i <= L; ++i )
		{
			alfa[i] = product[i-1]/alfa[i-1];
			beta[i] = alfa[i];
		}
		
//		long long int m, aux;
//		for ( i = 0; i <= L; ++i )
//		{
//			m = i;
//			for ( j = i; j <= L; ++j )
//			{
//				if ( beta[j] < beta[m] )
//				{
//					m = j;
//				}
//			}
//			aux = beta[m];
//			beta[m] = beta[i];
//			beta[i] = aux;
//		}
		
		quickSort(beta,0,L);
		
//		for ( i = 0; i <= L; ++i )
//		{
//			printf("%lld ", beta[i]);
//		}
		long long int c = 1;
		gamma[0] = beta[0];
		for ( i = 1; i <=L; ++i )
		{
			if ( beta[i]!=beta[i-1])
			{
				gamma[c] = beta[i];
				++c;
			}
		}
		//printf("pase1");
		char phi[100000];
		for ( i = 0; i < c; ++i )
		{
			phi[gamma[i]-1] =(char) i+65;
		}
		//printf("pase2");
//		printf("\n");
//		for ( i = 0; i < c; ++i )
//		{
//			printf("%lld ", gamma[i]);
//		}
		
		char mensaje[L+1];
		for ( i = 0; i <= L; ++i )
		{
			mensaje[i] = phi[alfa[i]-1];
		}
//		printf("\n");
		printf("Case #%lld: ", k);
		for ( i = 0; i <= L; ++i )
		{
			printf("%c", mensaje[i]);
		}
		printf("\n");
		++k;
	} while ( k != t+1 );
}