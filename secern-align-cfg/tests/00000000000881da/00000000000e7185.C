#include <stdio.h>
#include <stdlib.h>


int walk(int N,int x,int y, char *lyn, char *me, int xl, int yl)
{
	//printf("%d , %d:%d, %s\n%d, %d:%d, %s\nN:%d\n", x+y, x,y,me, xl+yl, xl, yl,lyn, N );
	
	if((x==N-1) && (y==N-1)) {
		me[x+y] = 0;
		return 1;
	}
	if((x>=N) || (y>=N)) {
		return 0;
	}
	if((xl==x) &&(yl==y)) { //we are in the same box
		if(lyn[x+y]  == 'S') {
			me[x+y] = 'E';
			if (walk(N, x+1, y, lyn, me, xl, yl+1) == 1) return 1;
		} else
		if(lyn[x+y]  == 'E') {
			me[x+y] = 'S';
			if (walk(N, x, y+1, lyn, me, xl+1, yl) == 1) return 1;
		}
	} else {
		int newxl, newyl;
		newxl = xl;
		newyl = yl;
		if(lyn[x+y] == 'S') {
			newyl++;
			} else newxl++;
		me[x+y] = 'E';
		if (walk(N, x+1, y, lyn, me, newxl, newyl) == 1) return 1;
		me[x+y] = 'S';
		if(walk(N, x, y+1, lyn, me, newxl, newyl)==1) return 1;
	}
	return 0;
}

int main()
{
int T;
int N;
char *lyn, *me;
int i;
scanf("%d", &T);
for(i=0; i< T; i++) {
	int x,y;
	scanf("%d", &N);
	lyn = (char *) malloc(sizeof(char)*(N+1));
	me = (char *) malloc(sizeof(char)*(N+1));
	scanf("%s", lyn);
	me[0] = '\0';
	x = 0; y=0;
	walk(N,x,y,lyn,me, 0, 0);
	printf("Case #%d: %s\n", i+1,me);
} 
return 0;
}
