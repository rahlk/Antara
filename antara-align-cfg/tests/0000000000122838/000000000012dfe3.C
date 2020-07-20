#include <stdio.h>
#include <string.h>
#include <limits.h>

#define FOR(i, a, b) for (i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

typedef long long ll;

int cmpfunc (const void * a, const void * b){
	//qsort(values, 5, sizeof(int), cmpfunc);
	return ( *(int*)a - *(int*)b );
}

int abs(int a){
	return a < 0 ? -1 * a : a;
}

int min(int a,int b){
	return a < b ? a : b;
}

int max(int a,int b){
	return a > b ? a : b;
}

long ncr(int n, int k) 
{ 
    long C[k+1]; 
    memset(C, 0, sizeof(C)); 
  	int i;
  	int j;
    C[0] = 1;  // nC0 is 1 
  
    for (i = 1; i <= n; i++) 
    { 
        // Compute next row of pascal triangle using 
        // the previous row 
        for ( j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
} 


void solve(int t){
	int n,k;
	scanf("%d%d",&n,&k);
	int c[n];
	int d[n];
	int i;
	for(i = 0;i < n;i++){
		scanf("%d",&c[i]);
	}
	for(i = 0;i < n;i++){
		scanf("%d",&d[i]);
	}

	int l,r, count = 0;
	for(l = 0;l < n;l++){
		int maxc = c[l];
		int maxd = d[l];
		if(abs(maxc - maxd) <= k){
			count++;
		}
		for(r = l+1;r < n;r++){
			if(c[r] > maxc){
				maxc = c[r];
			}
			if(d[r] > maxd){
				maxd = d[r];
			}
			if(abs(maxc - maxd) <= k){
				count++;
			}
		}
	}

	printf("Case #%d: %d\n",t,count);	
}

int main(){
	int T,t;
	scanf("%d",&T);
	for(t = 1;t <= T;t++){
		solve(t);
	}
}