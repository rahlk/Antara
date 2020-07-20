#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	long *ls=NULL,*ls2=NULL;
	long nt;
	long n;
	long l;
	long i,j,k;
	long n1,n2,d;
	int flag=1;
	long charr[26];
	char ch;
	
	scanf(" %ld",&nt);
	for(i=1;i<=nt;++i){
		flag=1;
	    while(1==1){
	        scanf("%c",&ch);
	        if(ch==' '|| ch=='\n'){
				if(flag==1)
					flag=0;
				else
					break;
	        }
	    }
		scanf("%ld",&l);
		ls=(long *)malloc(sizeof(long)*(l+1));
		ls2=(long *)malloc(sizeof(long)*(l+1));
		for(j=0;j<l;++j)
			scanf(" %ld",ls+j);
		//printf("okay");
		n1=*(ls+0);
		n2=*(ls+1);
		//printf(">>okay %ld %ld\n",n1,n2);
		if(n2>n1)
			d=n2-n1;
		else
			d=n1-n2;
		//printf("\n>>okay diff %ld\n",d);
		flag=1;
		while(flag==1){
			flag=0;
			for(j=2;j<(d/2);++j){
				if(d%j==0){
					d=d/j;
					flag=1;
					//printf("\ncal HCF j=%ld : %ld\n",j,d);
					break;
				}
			}
		}
		//printf("\nokay HCF = %ld\n",d);
		*ls2=*ls/d;
		*(ls2+1)=d;
		//printf("*%ld ",*(ls2+0));
		//printf("*%ld ",*(ls2+1));
		for(j=2;j<=l;++j){
			*(ls2+j)=*(ls+j-1)/d;
			d=*(ls2+j);
			//printf("*%ld ",*(ls2+j));
		}
		for(j=0;j<(l+1);++j){
			*(ls+j)=*(ls2+j);
		}
		for(j=0;j<l;++j){
			for(k=0;k<l-j;++k){
				if(*(ls+k)>*(ls+k+1)){
					n1=*(ls+k);
					*(ls+k)=*(ls+k+1);
					*(ls+k+1)=n1;
				}
			}
		}
		//printf("\n");
		charr[0]=*(ls+0);
		k=1;
		for(j=1;j<(l+1);++j){
			if(charr[k-1]!=*(ls+j)){
				charr[k]=*(ls+j);
				k++;
			}
		}
		printf("Case #%d: ",i);
		for(j=0;j<(l+1);++j){
			//printf("*%c=%ld ",65+j,charr[j]);
			for(k=0;k<26;++k){
				if(charr[k]==*(ls2+j))
				{
					printf("%c",65+k);
					break;
				}
			}
		}
		printf("\n");
		free(ls2);
		free(ls);
	}
	
	return(0);
}