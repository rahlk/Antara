#include<stdio.h>
#include<math.h>
// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(long long arr[], long long l, long long m, long long r) 
{ 
    long long i, j, k; 
    long long n1 = m - l + 1; 
    long long n2 =  r - m; 
  
    /* create temp arrays */
    long long L[n1], R[n2]; 
  
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
void mergeSort(long long arr[], long long l, long long r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        long long m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

int main()
{	

	long long T;
	scanf("%lld",&T);
	long long oo;
	for(oo=0;oo<T;oo++){
	long long i,j;
	long long N,L;
	scanf("%lld%lld",&N,&L);
	long long num[L];
	for(i=0;i<L;i++)
		scanf("%lld",&num[i]);
	long long k = (int)sqrt(num[0]);
	long long check=N;
	if(k<N)
		check=k;
	long long seive[check+1];

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
	long long p[L+1];
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
	long long copy[L+1];
	
	for(i=0;i<L+1;i++)
		copy[i]=p[i];
	
	mergeSort(copy,0,L);
	
	long long unique[26];
	
	
	unique[0]=copy[0];
	long long count=0;
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
	printf("Case #%lld: ",oo+1);
	for(i=0;i<L+1;i++)
		printf("%c",hash[p[i]]);
	printf("\n");
	

}
	return 0;
}










  


