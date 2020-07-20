#include <stdio.h>
#include <stdlib.h>

int main(){
	int t, w;
	scanf("%d%d",&t,&w);
	while(t--){
		long long int r[6],d[6];
		int i;
		for (i = 0; i < 6; i++){
			printf("%d\n", i+1);
			fflush(stdout);
			scanf("%lld",&d[i]);
		}
		r[0] = (d[0]*4 - d[1]*4 - d[2]*2 + d[5])/40;
		r[1] = (d[1]*24 - d[0]*24 + d[2]*2 - d[5])/20;
		r[2] = (d[2]*12 - d[0]*4 - d[1]*6 - d[5])/10;
		d[3] = (d[0]*16 - d[1]*16 - d[2]*8 + d[3]*10 - d[5])/10;
		d[4] = (d[1]*8 - d[0]*8 + d[2]*4 - d[3]*5 - d[5]*2 + d[4]*5)/5;
		d[5] = (d[0]*12 - d[1]*2 -d[2]*6 + d[5]*3 - d[4]*5)/5;
		for (i = 0; i< 6; i++){
			printf("%lld ", d[i]);
		}
		printf("\n");
		fflush(stdout);
		scanf("%d", &i);
		if (i == -1){
			exit(0);
		}
	}
}