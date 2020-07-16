#include<stdio.h>
#include<stdlib.h>
void func(int r, int c);
int main(){
    int t,r,c;
    scanf("%d",&t);
    while(t-- > 0){
        scanf("%d%d",&r,&c);
				func(r,c);
    }
    return 0;
}
void func(int r, int c){
	int a[r][c];
	int sr,sc,i = 0,n;
	char str[r*c][3];
	while(sr < r){
		while(sc < c){
			a[sr][sc] = 0;
			sc++;
		}
		sr++;
	}
	sr = rand()%r;
	sc = rand()%c;
	a[sr][sc] = 1;
	n = r * c - 1;
	str[i][3] = "
	while(i++ < n){
		
	}
}