#include<stdio.h>
#include<stdlib.h>

// Function to return gcd of a and b 
int gcd(int a, int b) ;
int binarySearch(int arr[], int l, int r, int x);
int sort(int arr[], int n);
void findPrimeIndex(int primeIndex[], int primes[], int l);

void printArray(int arr[], int l){
	int i=0;
	for(i=0;i<l;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
    int T,t;
    scanf("%d", &T);
    for(t=1;t<=T;t++){
        int n,l, i;
        scanf("%d%d", &n, &l);
        
        int cipher[l];
        
        for(i = 0;i<l;i++){
        	scanf("%d", &cipher[i]);
		}
		
		int i_prime = 0;
		int primes[l+1];
		
		primes[1] = gcd(cipher[0], cipher[1]);
		
		primes[0] = cipher[0]/primes[1];
		
		primes[2] = cipher[1]/primes[1];
		
		i_prime = 2;
		
		for(i = 2; i<l; i++){
			primes[i+1] = cipher[i]/primes[i];
		}
		
		int primeIndex[26] = {0};
		findPrimeIndex(primeIndex, primes, l+1);
		sort(primeIndex, 26);
		
		printf("Case #%d: ",t);
		for(i = 0;i<l+1;i++){
			
			char ch = 'A'+binarySearch(primeIndex, 0, 25, primes[i]);
			printf("%c",ch);
		}
		printf("\n");
    }
}

// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 

int lsearch(int array[], int item, int limit){
	int i;
	for(i = 0;i < limit; i++){
		if(array[i] == item)
			return i;
	}
	return -1;
}

void findPrimeIndex(int primeIndex[], int primes[], int l){
	int i, index=0;
	for(i = 0;i<l;i++){
		if(lsearch(primeIndex, primes[i], index) == -1){
			primeIndex[index] = primes[i];
			index++;
		}
	}
}


int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = (l + r )/ 2; 
  
        // Check if x is present at mid 
        if (arr[m] == x) 
            return m; 
  
        // If x greater, ignore left half 
        else if (arr[m] < x) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return -1; 
} 

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int sort(int values[], int n){
	qsort(values, n, sizeof(int), cmpfunc);
}
