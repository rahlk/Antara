#include <stdio.h>
#include <string.h>
#include <limits.h>

#define FOR(i, a, b) for (i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int cmpfunc (const void * a, const void * b){
	//qsort(values, 5, sizeof(int), cmpfunc);
	return ( *(int*)a - *(int*)b );
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
	int rr,cc;
	scanf("%d%d",&rr,&cc);
	int r = min(rr,cc);
	int c = max(rr,cc);
	if((r == 2 && c == 2) || (r == 2 && c == 3) || (r == 3 && c == 3) || (r == 2 && c == 4) || (r == 3 && c == 4) || (r == 4 && c == 4) || (r == 4 && c == 5)|| (r == 5 && c == 5)){
		printf("Case #%d: IMPOSSIBLE\n",t);		
	}

	if(r == 2 && c == 5){
		printf("Case #%d: POSSIBLE\n",t);
		printf("2 3\n");
		printf("1 1\n");
		printf("2 4\n");
		printf("1 2\n");
		printf("2 5\n");
		printf("1 3\n");
		printf("2 1\n");
		printf("1 5\n");
		printf("2 2\n");
		printf("1 4\n");
	}

	if(r == 3 && c == 5){
		printf("Case #%d: POSSIBLE\n",t);
		printf("1 1\n");
		printf("2 3\n");
		printf("3 1\n");
		printf("2 4\n");
		printf("1 2\n");
		printf("2 5\n");
		printf("2 2\n");
		printf("1 4\n");
		printf("2 1\n");
		printf("3 3\n");
		printf("2 5\n");
		printf("1 3\n");
		printf("1 5\n");
		printf("3 4\n");
	}


	// printf("Case #%d: %ld\n",t,count);	
}

int main(){
	int T,t;
	scanf("%d",&T);
	for(t = 1;t <= T;t++){
		solve(t);
	}
}