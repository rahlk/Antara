#include<stdio.h>
#include<math.h>

int cmpfun(const void *a,const void *b){
	if(*(long long int *)a > * (long long int *)b) return 1;
	if(*(long long int *)a < * (long long int *)b) return -1;
	return 0;
}


long long int binarySearch(long long int arr[],long long int l,long long int r,long long int x) 
{ 
    if (r >= l) { 
        long long int mid = l + (r - l) / 2; 
  
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    return -1; 
} 

int main(void){
	int t,count=1;
	scanf("%d",&t);
	while(t--){
		long long int N,L,i,j;
		scanf("%lld %lld",&N,&L);
		long long int prime[L],fact1=0,fact2=0,fact3=0,decrypt[L+1],sort[L+1],alpha[27];
		char str[L+2];
		for(i=0;i<L;i++){
			scanf("%lld",&prime[i]);
		}
		
		for(i=2;i<sqrt(prime[0]);i++){
			if(prime[0]%i==0) {
				fact1=i;
				break;
			}
		}
		
		fact2 = prime[0]/fact1;
		
		if(prime[1]%fact1==0) {
			fact3=prime[1]/fact1;
			decrypt[0] = fact2;
			decrypt[1] = fact1;
			decrypt[2] = fact3;
		}
		
		else {
			fact3=prime[1]/fact2;
			decrypt[0] = fact1;
			decrypt[1] = fact2;
			decrypt[2] = fact3;
		}
		
		for(i=3;i<=L;i++){
			decrypt[i] = prime[i-1]/decrypt[i-1];
		}
		
		for(i=0;i<=L;i++) sort[i]=decrypt[i];
		qsort(sort,L+1,sizeof(long long int),cmpfun);
		alpha[0]=sort[0];
		for(i=1,j=0;i<=L && j<26;i++){
			if(sort[i]!=alpha[j]){
				j++;
				alpha[j] = sort[i];
			} 
		}
		alpha[j+1]='\0';
		printf("j=%lld\n",j+1);
		for(i=0;i<=L;i++){
			long long int x = binarySearch(alpha, 0, L, decrypt[i]); 
			str[i] = 65+x;
		}
		str[i]='\0';
		printf("Case #%d: %s\n",count,str);
		count++;
	}
	return 0;
}