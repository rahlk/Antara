#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	int np=1;
	while(T--){
		int N;
		scanf("%d\n",&N);
		int n,i; 
		n=(2*N)-2;
		char P[n];
		for(i=0;i<n;i++)
		{
			scanf("%c",&P[i]);
		}
		for(i=0;i<n;i++)
		{	//printf("%c",P[i]);
			if(P[i]=='E'){
				P[i]='S';
					//printf("%c",P[i]);
			}
			else{
				P[i]='E';
						//printf("%c",P[i]);
			}
		}
		printf("Case #%d: ",np);
		for(i=0;i<n;i++)
		{
			printf("%c",P[i]);
		}
		
		np++;
	}
}
