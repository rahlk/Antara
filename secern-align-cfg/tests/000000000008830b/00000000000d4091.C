#include<stdio.h>
#define MAX 9223372036854775807
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



long long gcd(long long a, long long b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int main(){

	int t;
	scanf("%d",&t);
	for(int z=1;z<=t;z++)
	{
		long long l,n;
		scanf("%lld %lld", &n,&l);
		long long arr[l];
		for(long long h=0;h<l;h++)
		{
			scanf("%lld",&arr[h]);
		}
		long long gcd1;
		gcd1 = gcd(arr[0],arr[1]);
		long long arry[l+1];
		arry[0]=arr[0]/gcd1;
		arry[1]=gcd1;
		for(long long h=2;h<l+1;h++)
		{
			arry[h]=arr[h-1]/arry[h-1];
		}
		int min = MAX,index=0;
		char strin[l+2];

		for(long long m=0;m<26;m++)
		{
			long long min = MAX,index=0;
			for(long long h=0;h<l+1;h++)
			{
				
				if(arry[h]<min)
				{
					
					min = arry[h];
				}
			}
			for(long long h=0;h<l+1;h++)
			{
				
				if(arry[h]==min)
				{
					
					arry[h] = MAX;
			strin[h] = 65+m;
				}
			}
			
		}
		strin[l+1]='\0';
		/*for(long long h=0;h<l+1;h++)
		{
			printf("%lld ",arry[h] );
		}*/
		/*long long arry2[l+1];
		for(long long h=0;h<l+1;h++)
		{
			arry2[h]=arry[h];
		}
		mergeSort(arry2,0,l);
		long long j=0;
		long long alphabets[26];
		for (long long i=0;i<l;i++)
		{
			if(arry2[i]==arry2[i+1])
			{

			}
			else
			{
				alphabets[j]=arry2[i];
				j++;
			}
		} 
		alphabets[j]=arry2[l];
		char strin[l+2];
		for(long long h=0;h<26;h++)
		{
			for(long long x=0;x<l+1;x++)
			{
				if(alphabets[h]==arry[x])
				{
					strin[x]=65+h;
				}
			}
		}
		strin[l+1]='\0';


		/*for(long long h=0;h<l+1;h++)
		{
			printf("%c", strin[h] );
		}
		printf("\n");*/
		printf("Case #%d: %s\n", z,strin);
	}
	return 0;
} 
