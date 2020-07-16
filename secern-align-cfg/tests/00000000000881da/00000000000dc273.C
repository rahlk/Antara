/*
 * @author Santosh Kumar Shaw (devsks)
 * @quote "Code like there's no tommorow!"
 */
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#define mod 1000000007
#define ll long long
#define FOR(X,Y) for(ll X = 0; X < Y; ++X)
#define inp(X) scanf("%lli",&X)
#define prn(X) printf("%lli",X);
int cmp(const void*a, const void*b);

int main(void)
{
	ll t;
	inp(t);
	FOR(tt,t)
	{
		ll n;
		inp(n);
		char path_old[30000],path_new[30000];
		scanf("%s",path_old);
		int len = 2*n-2,e= len/2,s=len/2;
		if(path_old[0]=='E' && path_old[len-1]=='E'){
			path_new[0]='S';
			s-=2;
			int flag =0;
			for(int i = 1; i < len - 1; ++i){
				if( path_old[i]=='S' && path_old[i-1]=='S' && e >1){
						path_new[i] = 'E';
						--e;
						flag=1;
				}else if(flag && e >1){
						path_new[i] = 'E';
						--e;
						flag=0;
				}
				else if(s >0){
					path_new[i]='S';
					--s;
				}else{
					path_new[i]='E';
					--e;
				}
			}
			path_new[len-1] = 'S';
		}else if(path_old[0]=='E' && path_old[len-1]=='S'){
			path_new[0]='S';
			--s;
			--e;
			for(int i=1;i< len-1;++i){
				if(s>0){
					path_new[i] = 'S';
					--s;
				}
				else {
					path_new[i]='E';
					--e;
				}
			}
			path_new[len-1] = 'E';
		} else if(path_old[0]=='S' && path_old[len-1]=='E'){
			--s;
			--e;
			path_new[0]='E';
			for(int i=1;i< len-1;++i){
				if(e>0){
					path_new[i]='E';
					--e;
				}
				else {
					path_new[i] = 'S';
					--s;
				}
			}
			path_new[len-1] = 'S';
		}else{
			e-=2;
			path_new[0]='E';
			int flag =0;
			for(int i = 1; i < len - 1; ++i){
				if( path_old[i]=='E' && path_old[i-1]=='E' && s >1){
						path_new[i] = 'S';
						--s;
						flag=1;
				}else if(flag && s >1){
						path_new[i] = 'S';
						--s;
						flag=0;
				}
				else if(e >0){
					path_new[i]='E';
					--e;
				}else{
					path_new[i]='S';
					--s;
				}
			}
			path_new[len-1] = 'E';
		}
		printf("Case #%i: %s\n", tt+1, path_new);
		
	}
	return 0;
}

