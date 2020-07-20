#include <stdio.h>
#include <string.h>
#include <limits.h>

#define FOR(i, a, b) for (i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

typedef long long ll;

int cmpfuncx (const void * a, const void * b){
	//qsort(values, 5, sizeof(int), cmpfunc);
	int *f = (int *)a;
	int *s = (int *)b;
	return f[0] - s[0];
}

int cmpfuncy (const void * a, const void * b){
	//qsort(values, 5, sizeof(int), cmpfunc);
	int *f = (int *)a;
	int *s = (int *)b;
	return f[1] - s[1];
}

int cmpfunc (const void * a, const void * b){
	//qsort(values, 5, sizeof(int), cmpfunc);
	int *f = (int *)a;
	int *s = (int *)b;
	if(f[1] == s[1]){
		return f[0] - s[0];
	}
	return s[1] - f[1];
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

int people[501][3];
int xpeople[501][3];
int ypeople[501][3];

int x[100005][2];
int y[100005][2];

void solve(int t){
	int p,q;
	scanf("%d%d",&p,&q);
	memset(x,0,(100005)*2*sizeof(int));
	memset(y,0,(100005)*2*sizeof(int));

	int i;
	for(i = 0;i < p;i++){
		char c,d;
		scanf("%d%d",&people[i][0],&people[i][1]);
		scanf("%c",&d);
		scanf("%c",&c);
		if(c == 'N'){
			people[i][2] = 0;
		}
		else if(c == 'E'){
			people[i][2] = 1;
		}
		else if(c == 'S'){
			people[i][2] = 2;
		}
		else if(c == 'W'){
			people[i][2] = 3;
		}
		xpeople[i][0] = people[i][0];
		xpeople[i][1] = people[i][1];
		xpeople[i][2] = people[i][2];

		ypeople[i][0] = people[i][0];
		ypeople[i][1] = people[i][1];
		ypeople[i][2] = people[i][2];
		// printf("%d %d %d\n",people[i][0],people[i][1],people[i][2]);
	}
	qsort(xpeople,p,3*sizeof(int),cmpfuncx);
	qsort(ypeople,p,3*sizeof(int),cmpfuncy);

	// for(i = 0;i < p;i++){
	// 	printf("%d %d %d\n",xpeople[i][0],xpeople[i][1],xpeople[i][2]);
	// }

	// for(i = 0;i < p;i++){
	// 	printf("%d %d %d\n",ypeople[i][0],ypeople[i][1],ypeople[i][2]);
	// }

	int currX = 0;
	x[currX][0] = 0;
	x[currX][1] = 0;
	int totalYet = 0;
	for(i = 0;i < p;i++){
		if(xpeople[i][2] == 1){
			while(currX < xpeople[i][0]){
				currX++;
				x[currX][0] = currX;
				x[currX][1] += totalYet;
			}
			totalYet++;
		}
	}
	while(currX < q){
		currX++;
		x[currX][0] = currX;
		x[currX][1] += totalYet;
	}

	currX = q;
	totalYet = 0;
	for(i = p-1;i >= 0;i--){
		if(xpeople[i][2] == 3){
			while(currX > xpeople[i][0]){
				currX--;
				x[currX][0] = currX;
				x[currX][1] += totalYet;
			}
			totalYet++;
		}
	}
	while(currX > 0){
		currX--;
		x[currX][0] = currX;
		x[currX][1] += totalYet;
	}

	int currY = 0;
	y[currY][0] = 0;
	y[currY][1] = 0;
	totalYet = 0;
	for(i = 0;i < p;i++){
		// printf("%d %d %d %d\n",ypeople[i][2],currY,y[currY][1],totalYet);
		if(ypeople[i][2] == 0){
			while(currY < ypeople[i][1]){
				currY++;
				y[currY][0] = currY;
				y[currY][1] += totalYet;
			}
			totalYet++;
		}
	}
	while(currY < q){
		currY++;
		y[currY][0] = currY;
		y[currY][1] += totalYet;
	}

	currY = q;
	totalYet = 0;
	for(i = p-1;i >= 0;i--){
		if(ypeople[i][2] == 2){
			while(currY > ypeople[i][1]){
				currY--;
				y[currY][0] = currY;
				y[currY][1] += totalYet;
			}
			totalYet++;
		}
	}
	while(currY > 0){
		currY--;
		y[currY][0] = currY;
		y[currY][1] += totalYet;
	}

	qsort(x,q+1,2*sizeof(int),cmpfunc);
	qsort(y,q+1,2*sizeof(int),cmpfunc);

	// for(i = 0;i <= q;i++){
	// 	printf("%d %d\n",x[i][0],x[i][1]);
	// }

	// for(i = 0;i <= q;i++){
	// 	printf("%d %d\n",y[i][0],y[i][1]);
	// }
	printf("Case #%d: %d %d\n",t,x[0][0],y[0][0]);	
}

int main(){
	int T,t;
	scanf("%d",&T);
	for(t = 1;t <= T;t++){
		solve(t);
	}
}