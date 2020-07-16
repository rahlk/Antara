
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int T,A;
	int L[255];
	char C[255][500],S[500];
	int i,j,k,l,m,r,p,s;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		scanf("%d",&A);
		for(j=0;j<A;j++){
			scanf("%s",C[j]);
			L[j]=strlen(C[j]);
		}
		for(j=0;j<500;j++)	S[j]=0;
		for(j=0;j<500;j++){
			r=0;
			p=0;
			s=0;
			for(k=0;k<A;k++){
				if(C[k][j%L[j]]=='R')r=1;
				else if(C[k][j%L[j]]=='P')p=1;
				else if(C[k][j%L[j]]=='S')s=1;
			}
			l=r+p+s;
			if(l==3){
				printf("Case #%d: %s\n",i,"IMPOSSIBLE");
				goto end;
			}else if(l==2){
				S[j]=(r==0)?'S':(p==0)?'R':'P';
			}else{
				S[j]=(r)?'P':(p)?'S':'R';
				goto print;
			}
		}
		print: printf("Case #%d: %s\n",i,S);
		end:   fflush(stdout);
	}
	return 0;
}

