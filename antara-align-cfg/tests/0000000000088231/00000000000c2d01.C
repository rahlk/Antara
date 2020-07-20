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
	char s[110];
	scanf("%s",s);
	int l = strlen(s);
	// printf("%d\n",l);
	int i,j;
	char s2[110];
	for(i = 0;i < l;i++){
		if(s[i] == '5'){
			s[i] = '3';
			s2[i] = '2';
		}
		else if(s[i] == '1' || s[i] == '0'){
			s2[i] = '0';
			continue;
		}
		else{
			s[i] = s[i] - 1;
			s2[i] = '1';
		}
	}
	s2[i] = '\0';
	printf("Case #%d: %s %s\n",t,s,s2);	
}

int main(){
	int T,t;
	scanf("%d",&T);
	for(t = 1; t <= T;t++){
		solve(t);
	}
}