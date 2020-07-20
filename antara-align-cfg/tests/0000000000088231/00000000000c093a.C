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
		char n[512],a[512],b[512];
		int len,j=-1;
		scanf("%s%n",n,&len);
		--len;
		FOR(i,len){
			if(n[i]=='4'){
				n[i] = '3';
				b[++j] = '1';
			}else if(j!=-1){ 
				b[++j] = '0';
			}
		}
		if(j==-1){
			b[0] = '0';
			b[1] = '\0';
		}
		else{
			b[++j] = '\0';
		}
		printf("Case #%lli: %s %s\n", tt + 1, n, b);
	}
	return 0;
}

