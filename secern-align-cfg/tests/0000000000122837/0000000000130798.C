#include <stdio.h>
#include <string.h>

#define FORN( i , s , n ) for( int i = (s) ; i < (n) ; i++ )
#define FOR( i , n ) FORN( i , 0 , n )

typedef long long int64;

int v[10];

void solve(int64 A, int64 B, int64 C){
    FOR(i,101){
        FOR(j,101){
            FOR(k,101){
                FOR(l,101){
                    v[0] = i;
                    v[1] = C - 2*i;
                    if(v[1]<0) continue;
                    v[2] = j;
                    v[3] = k;
                    v[4] = l;
                    v[5] = A - 2*i-j-k-l;
                    if(v[5]<0) continue;
                    printf("%d %d %d %d %d %d", v[0], v[1], v[2], v[3], v[4], v[5]);        
                    return;
                }
            }
        }
    }
}

int main(){
	int64 T, W, A, B;
    int ans;
	FOR(i,T) {
        printf("1");
        fflush(stdout);
        scanf("%d", &A);
        printf("2");
        fflush(stdout);
        scanf("%d", &B);

        int64 C = B-A;
        solve(A,B,C);
        
        fflush(stdout);
        scanf("%d", &ans);
        if(ans == -1) return 0;
        fflush(stdout);
	}

    return 0;
}


