

#include<stdio.h>
#include<string.h>

int main(){
	int T,N,C,L[1000],M[1000],max,R,min,P[1000];
	char S[1000][50];
	int i,j,k,l;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		scanf("%d",&N);
		for(j=0;j<N;j++)
			scanf("%s",S[j]);		
		for(j=0;j<N;j++){
			L[j]=strlen(S[j]);
			P[j]=1;
		}
		min=50;
		for(j=0;j<N;j++)
		{
				if(L[j]<min)min=L[j];
		}		
		R=0;
		for(l=0;l<min;l++)
		{
			for(j=0;j<N-1;j++){
				M[j]=0;
				for(k=j+1;k<N;k++)
				{
					if(P[j])
					{
						//printf("%d %d %d: %c %c %d\n",j,k,l,S[j][L[j]-1-l],S[k][L[k]-1-l],S[j][L[j]-1-l]==S[k][L[k]-1-l]);
						if(S[j][L[j]-1-l]==S[k][L[k]-1-l])
							M[j]++;
					}
				}
			}
			max=0;
			for(j=0;j<N;j++){
				if(M[j]>max)max=M[j];
				//printf("%d %d:%d\n",j,l,M[j]);
			}
			for(j=0;j<N;j++){
				if(M[j]==0)P[j]=0;
			}
			if(max)max++;
			R+=max/2;
		}
		printf("Case #%d: %d\n",i,R);
		fflush(stdout);
	}
	return 0;
}
