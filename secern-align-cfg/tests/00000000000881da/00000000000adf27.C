#include<stdio.h>
#include<stdlib.h>
int main(){
int T,N,i,j,k,l;
char P[100000],C;
scanf("%d",&T);
for(i=1;i<=T;i++){
	scanf("%d",&N);
	l=2*N-2;
	//P = (char *) malloc(l);
	scanf("%s",P);
	if(P[0]!=P[l-1]){
		C=(P[0]=='E')?'S':'E';
		for(j=0;j<N-1;j++)	P[j]=C;
		C=(C=='E')?'S':'E';
		for(;j<l;j++)		P[j]=C;
	}else{
		C=(P[0]=='E')?'S':'E';
		k=0;
		for(j=0;j<l-1;j++){
			if(P[j]==C){
				k++;
				if(P[j+1]==C)	break;
			}
		}
		for(j=0;j<k;j++)	P[j]=C;
		C=(C=='E')?'S':'E';
		for(;j<k+N-1;j++)	P[j]=C;
		C=(C=='E')?'S':'E';
		for(;j<l;j++)	P[j]=C;
	}
	printf("Case #%d: %s\n",i,P);
	fflush(stdout);
	//free(P);
}
return 0;
}
