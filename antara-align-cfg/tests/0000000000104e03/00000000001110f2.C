#include<stdio.h>
#include<stdlib.h>

int main(void){
	int t,r,c,i,j1,j,k1,k,*arrx,*arry,*visited,s=0,flag=1;
	scanf(" %d",&t);
	for(i=0;i<t;++i){
		scanf(" %d %d",&r,&c);
		arry = (int *)malloc(sizeof(int)*r*c);
		arrx = (int *)malloc(sizeof(int)*r*c);
		visited = (int *)malloc(sizeof(int)*r*c);
		//printf("\n----------------NEW CASE-----------------------------------");
		for(s=0;s<r*c;++s){
			*(visited+s)=0;
		}
		//printf("\n---Initialized Visited Array");
		*arrx=j1=r/2;
		*arry=k1=c/2;
		s=1;
		*(visited+j1*c+k1)=1;
		//printf("\n---->(%d,%d) Visited\n",*(arrx)+1,*(arry)+1);
		flag=1;
		while(flag==1){
			flag=0;
			for(j=0;j<r;++j){
				for(k=0;k<c;++k){
					//printf("\n------>checking (%d,%d)\n",j+1,k+1);
					if((j!=j1)&&(k!=k1)&&((j1-k1)!=(j-k))&&((j1+k1)!=(j+k))){
						if(*(visited+j*c+k)==0){
							s++;
							*(arrx+s-1)=j;
							*(arry+s-1)=k;
							*(visited+j*c+k)=1;
							j1=j;
							k1=k;
							flag=1;
							//printf("\n---------->(%d,%d) Visited in Loop\n",*(arrx+s-1)+1,*(arry+s-1)+1);
							break;
						}
					}
				}
				if(flag==1)
					break;
			}
		}
		if(s!=(r*c))
			printf("Case #%d: IMPOSSIBLE\n",i+1);
		else{
			printf("Case #%d: POSSIBLE\n",i+1);
			for(j=0;j<s;++j){
				printf("%d %d\n",*(arrx+j)+1,*(arry+j)+1);
			}
		}
		free(arrx);
		free(arry);
		free(visited);
		arrx=arry=visited=NULL;
	}
	return(0);
}