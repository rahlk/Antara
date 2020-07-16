#include<stdio.h>
#include<math.h>
// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
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
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

int main()
{	

	int T;
	scanf("%d",&T);
	int oo;
	for(oo=0;oo<T;oo++){
	int i,j;
	int N,L;
	scanf("%d%d",&N,&L);
	int num[L];
	for(i=0;i<L;i++)
		scanf("%d",&num[i]);
	int k = (int)sqrt(num[0]);
	int check=N;
	if(k<N)
		check=k;
	int seive[check+1];

	for(i=0;i<check+1;i++)
		seive[i]=1;

	for(i=2;i<check+1;i++)
	{
		for(j=2;j<(check/i)+1;j++)
		{
			if(seive[i*j])
				seive[i*j]=0;
		}
	}

	seive[0]=0;
	seive[1]=0;
	int p[L+1];
	for(i=2;i<check;i++){
		if(seive[i]){
			if(num[0]%i==0){
				p[0]=i;
				break;
			}
		}
	}


	for(i=1;i<L+1;i++)
		p[i]=num[i-1]/p[i-1];
	int copy[L+1];
	
	for(i=0;i<L+1;i++)
		copy[i]=p[i];
	
	mergeSort(copy,0,L);
	
	int unique[26];
	
	
	unique[0]=copy[0];
	int count=0;
	for(i=1;i<L+1;i++){
		if(copy[i]!=copy[i-1]){
			count++;
			unique[count]=copy[i];
		}
	}

		
	char hash[unique[25]+1];

	for(i=0;i<26;i++)
	{
		hash[unique[i]]='A'+i;
	}
	printf("Case #%d: ",oo+1);
	for(i=0;i<L+1;i++)
		printf("%c",hash[p[i]]);
	printf("\n");

}

}










  

