#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define R 1
#define P 2
#define S 4

int t,a,maxlen;
char moves[255][501];
int m[501];
int len[255];
int contenders[255];

int max(int a,int b){
	return a>b?a:b;
}

void init(){
	for(int i=0;i<255;i++){
		contenders[0] = 0;
	}
	maxlen = 0;
	for(int i=0;i<255;i++){
		maxlen = max(maxlen,len[i]);
	}
}

void solve(int t){
	char winner[501];
	int wl=0,current;
	init();
	for(int i=0;i<maxlen;i++){
		current = 0;
		for(int j=0;j<a;j++){
			if(contenders[j]) continue;
			switch (moves[j][i])
			{
				case 'R': //Rock
					current |= R;
					break;
				case 'P': //paper
					current |= P;
					break;
				case 'S': //Sissor
					current |= S;
					break;
			}
		}
		if(current == 0){
			break;
		}
		switch (current)
		{
		case R: //Rock
			winner[wl++] = 'P';
			break;
		case P: //paper
			winner[wl++] = 'S';
			break;
		case S: //Sissor
			winner[wl++] = 'R';
			break;
		case R | P: //Rock & paper
			winner[wl++] = 'P';
			break;
		case P | S: //Paper and sicc
			winner[wl++] = 'S';
			break;
		case R | S: //Rock and Sicc
			winner[wl++] = 'R';
			break;
		case P | S | R: //Paper and sicc and siccor
			printf("Case #%d: %s\n", t, "IMPOSSIBLE");
			return;
			break;
		}
		for (int j = 0; j < a; j++){
			if (contenders[j])
				continue;
			switch (moves[j][i]){
				case 'R': //Rock
					if(winner[wl-1] == 'P')
						contenders[j] = 1;
					break;
				case 'P': //paper
					if(winner[wl-1] == 'S')
						contenders[j] = 1;
					break;
				case 'S': //Sissor
					if(winner[wl-1] == 'R')
						contenders[j] = 1;
					break;
			}
		}
	}
	for(int i=0;i<a;i++){
		if(contenders[i]!=1){
			winner[wl++] = moves[i][0];
			break;
		}
	}
	winner[wl++] = 0;
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