#include<stdio.h>
#include<stdlib.h>

int main(void){

	long t,n,k,i,j,k2;
	long *c,*d;
	long count,chk;
	scanf(" %ld",&t);
	for(i=0;i<t;++i){
		scanf(" %ld %ld",&n,&k);
		c = (long *)malloc(sizeof(long)*n);
		d = (long *)malloc(sizeof(long)*n);
		for(j=0;j<n;++j)
			scanf(" %ld",(c+j));
		for(j=0;j<n;++j)
			scanf(" %ld",(d+j));
		count=0;
		for(j=0;j<n;++j){
			if(*(c+j)>0){
			for(k2=0;k2<n;++k2){
				if(*(d+k2)>0){
					chk=*(c+j)-*(d+k2);
					if(chk<0)
						chk=chk*-1;
					if(chk<=k){
						//printf("-->%ld %ld diff:%ld\n",*(c+j),*(d+k2),chk);
						count++;
					}
				}
			}
			}
		}
		printf("Case #%ld: %ld\n",i+1,count);
		free(c);
		free(d);
	}
	return 0;
}