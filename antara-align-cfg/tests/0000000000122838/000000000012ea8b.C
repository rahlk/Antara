#include<stdio.h>

void main(void){
	int t,p=0,count=0;
	scanf("%d",&t);
	while(t!=0){
		p++;
		t--;
		long long int N;
		int K,i;
		scanf("%lld %d",&N,&K);
		long int ci[N];
		long int di[N];
		for(i=0;i<N;i++){
		  scanf("%ld",&ci[i]);	
		}
		for(i=0;i<N;i++){
		  scanf("%ld",&di[i]);	
		}
		int j;
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
			    int temp = abs(ci[i]-di[i]);
				if(temp <= K && temp >= 0 && i>=j){
					count++;
				}
			}
		}	
		printf("Case #%d: %d",p,count);
		count = 0;
	}

}
