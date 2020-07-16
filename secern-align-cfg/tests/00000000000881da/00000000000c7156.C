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

typedef struct pair{
	int x, y;
}pair;
char dp[50000][50000];
int solve(int n, int x, int y, int ax, int ay, char * old, int i, char *new, pair a, pair b ){
//printf("%i %i\n",x,y);	
	if(i){
		if(x >= n || y >=n)
			return 0;
		if(dp[x][y])
		return dp[x][y];
	

		if(x==ax && y == ay){
			if( a.x == b.x && a.y == b.y)
			{
				dp[x][y] = 0;
			}
		}
		
		if(x==n-1 && y==n-1){
			dp[x][y] =1;
		}
		
	}
	if(i >= 2*n-2)
		return 0;
		b.x = ax;
		b.y = ay;
		if(old[i]=='E')
			ax+=1;
		else
			ay+=1;
		a.x = x;
		a.y = y;
		
		if(solve(n,x+1,y,ax,ay,old,i+1,new,a,b)){
			new[i] = 'E';
			dp[x][y] = 1;
		}else if(solve(n,x,y+1,ax,ay,old,i+1,new,a,b)){
				new[i] = 'S';
				dp[x][y] = 1;
		}
		//else{
		//	new[i] ='j';
		//	return 0;
	//	}
		
	
	return dp[x][y];


}
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
		pair a = {0,0}, b = {0,0};
		solve(n, 0, 0, 0, 0, path_old, 0, path_new, a, b);
		path_new[2*n-2]='\0';
		printf("Case #%i: %s\n", tt+1, path_new);
		
	}
	return 0;
}

