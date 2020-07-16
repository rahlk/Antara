
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int T,A;
	int L[255],F[255];
	char C[255][500],S[500],S1;
	int i,j,k,l,m,r,p,s;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		printf("Case #%d: ",i);
		fflush(stdout);
		scanf("%d",&A);
		m=0;
		for(j=0;j<A;j++){
			scanf("%s",C[j]);
			L[j]=strlen(C[j]);
			m=(m<L[j])?L[j]:m;
			F[j]=1;
		}
		for(j=0;j<m;j++){
			r=0;
			p=0;
			s=0;
			for(k=0;k<A;k++){
				if(F[k]){
					S1=C[k][j%L[k]];
					if(S1=='R') r=1;
					else if(S1=='P')p=1;
					else s=1;
				}
			}
			l=r+p+s;
			if(l==3){
				printf("IMPOSSIBLE\n");
				goto end;
			}else if(l==2){
				S[j]=(r==0)?'S':(p==0)?'R':'P';
				for(k=0;k<A;k++){
				    if(F[k]){
					    S1=C[k][j%L[k]];
					    if(S[j]!=S1){
						    F[k]=0;
					    }
				    }
				}
			}else{
				S[j]=(r)?'P':(p)?'S':'R';
				goto print;
			}
		}
		print: for(k=0;k<=j;k++) printf("%c",S[k]);
			printf("\n");
		end:   fflush(stdout);
	}
	return 0;
}

