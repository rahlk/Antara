#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int t,a;
char moves[255][501];
char len[255];

int max(int a,int b){
	return a>b?a:b;
}

void solve(int t){
	char winner[501];
	int wl = 0,r,p,s;
	int maxlen = 0;
	for(int i=0;i<a;i++){
		maxlen = max(maxlen,len[i]);
	}
	// printf("maxlen:%d\n",maxlen );
	for(int i=0;i<maxlen;i++){
		r = p = s = 0;
		for(int j=0;j<a;j++){
			if(len[j]<=i) continue;
			// printf("moves[%d][%d]:%c\n",j,i,moves[j][i] );
			if(moves[j][i] == 'R'){
				r=1;
			}else if(moves[j][i] == 'P'){
				p=1;
			}else if(moves[j][i] == 'S'){
				s=1;
			}
		}
		if(r+p+s == 3){
			printf("Case #%d: %s\n",t,"IMPOSSIBLE");
			return;
		}else if(r+p == 2){
			winner[wl++] = 'P';
		}else if(s+p == 2){
			winner[wl++] = 'S';
		}else if(r+s == 2){
			winner[wl++] = 'R';
		}else if(r == 1){
			winner[wl++] = 'P';
			break;
		}else if(p == 1){
			winner[wl++] = 'S';
			break;
		}else if(s == 1){
			winner[wl++] = 'R';
			break;
		}else{
			// printf("Case #%d: %s\n",t,"OH NO!");
		}
		if(wl>=maxlen){
			break;
		}
	}
	winner[wl] = 0;
	printf("Case #%d: %s\n",t,winner);
}

int main(int argc, char const *argv[])
{
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&a);
		for(int j=0;j<a;j++){
			scanf("%s",moves[j]);
			len[j] = strlen(moves[j]);
		}
		solve(i+1);
	}
	return 0;
}