#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

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

char c[3] = {'R','S','P'};
int a;
int maxLen;

int beats(char a, char b){
	if(a == 'S' && b == 'P'){
		return 1;
	}
	else if(a < b){
		return 1;
	}
	else{
		return 0;
	}
}
char * fill(char * temp, int i, char s[][505]){
	int j,k,flag = 1;
	if(i == maxLen){
		for(j = 0;j < a;j++){
			for(k = 0;k < maxLen && k < strlen(s[j]);k++){
				if(!beats(temp[k],s[j][k])){
					flag = 0;
					break;
				}
			}
			if(!flag){
				break;
			}
		}
		if(flag){
			temp[maxLen] = '\0';
			return temp;
		}
		else{
			char * cons = "IMPOSSIBLE";
			return cons;
		}
	}

	for(j = 0;j < 3;j++){
		temp[i] = c[j];
		char * r = fill(temp,i+1,s);
	}
}

void solve(int t){
	scanf("%d",&a);
	char ss[a][505];
	int i,j;
	maxLen = 0;
	for(i = 0;i < a;i++){
		scanf("%s",ss[i]);
		maxLen = max(strlen(ss[i]),maxLen);
	}

	char *temp = (char*) malloc(sizeof(char)*(maxLen+1));

	char * result = fill(temp,0,ss);
	printf("Case #%d: %s\n",t,result);
}

int main(){
	int T,t;
	scanf("%d",&T);
	for(t = 1;t <= T;t++){
		solve(t);
	}
}