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
	int a;
	scanf("%d",&a);
	char ss[a][505];
	int i,j;
	int maxLen = 0;
	for(i = 0;i < a;i++){
		scanf("%s",ss[i]);
		maxLen = max(strlen(ss[i]),maxLen);
	}

	char result = 'a';
	int flag = 1;
	for(i = 0;(i < maxLen) && (flag);i++){
		int r = 0,p = 0,s = 0;
		for(j = 0;j < a;j++){
			if(ss[j][i] == 'R'){
				r = 1;
			}
			else if(ss[j][i] == 'S'){
				s = 1;
			}
			else if(ss[j][i] == 'P'){
				p = 1;
			}
		}
		if(r + s + p >= 2){
			flag = 0;
			break;
		}
		else{
			if(r == 1){
				result = 'P';
			}
			else if(s == 1){
				result = 'R';
			}
			else if(p == 1){
				result = 'S';
			}
			break;
		}
	}

	if(flag){
		printf("Case #%d: %c\n",t,result);
	}
	else{
		printf("Case #%d: IMPOSSIBLE\n",t);
	}	
}

int main(){
	int T,t;
	scanf("%d",&T);
	for(t = 1;t <= T;t++){
		solve(t);
	}
}