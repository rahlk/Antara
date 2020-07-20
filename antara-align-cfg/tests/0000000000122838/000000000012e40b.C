#include<stdio.h>

void main(void){
	int t,p=0,count=0;
	scanf("%d",&t);
	while(t!=0){
		p++;
		t--;
		int N,K,i;
		scanf("%d%d",&N,&K);
		int ci[N];
		int di[N];
		for(i=0;i<N;i++){
		  scanf("%d",&ci[i]);	
		}
		for(i=0;i<N;i++){
		  scanf("%d",&di[i]);	
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
	}

}
