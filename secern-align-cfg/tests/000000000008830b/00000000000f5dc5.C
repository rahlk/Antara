#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
void sort(long long int arr[], long long int l, long long int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        long long int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        sort(arr, l, m); 
        sort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
int main()
{
	long long int t,o,n,l,i,a[10004],f[10005],q[10005],k,j;
	char c[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%lld",&t);
	for(o=0;o<t;o++)
	{
		scanf("%lld %lld",&n,&l);
		for(i=0;i<l;i++)
		{
			scanf("%lld",&a[i]);
		}
		//factor
		for(i=3;i<=sqrt(a[0]);i++)
		{
			if(a[0]%i==0)
			{
			f[0]=i;
			/*
			cout<<"\n\n\n"<<f[0];
			*/
			break;	
			}		
		}
		for(i=1;i<=l+1;i++)
		{
		    if(f[i-1]==0)
		    break;
			f[i]=a[i-1]/f[i-1];
		}	
		
		
		for (i=0; i<l+1; i++) 
       	q[i]=f[i];
		
				
			
		sort(f,0,l);
	
	
	/*	
		cout<<endl;
		for (int i=0; i<l+1; i++) 
        cout << f[i] << " ";
	*/	
		if (l+1==0 || l+1==1) 
        k=n;
   else
   {
    j = 0; 
  
    // Doing same as done in Method 1 
    // Just maintaining another updated index i.e. j 
    for (i=0; i < l; i++) 
        if (f[i] != f[i+1]) 
            f[j++] = f[i]; 
  
    f[j++] = f[l]; 
  
    k=j;
}
		
		
		
		
		
	
		/*
		cout<<endl;
		for ( i=0; i<k; i++) 
       	cout << f[i] << " ";
		*/
		printf("Case #%lld: ",o+1);
		
		for(i=0;i<l+1;i++)
		{
			for(j=0;j<26;j++)
			{
				if(q[i]==f[j])
				{
					printf("%c",c[j]);
				}
			}
		}
	printf("\n");
	
	}
	return 0;
}