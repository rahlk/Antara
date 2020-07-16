#include <stdio.h>
#include <stdlib.h>
int findex;
void printa(int *d,int num){
    int i;
	for(i=num;i>=1;i--){
		printf("%d",d[i]);
	}
	printf(" ");
}
void printb(int *b,int num){
    int i;
	for(i=findex;i>=1;i--){
		printf("%d",b[i]);
	}
	printf("\n");
}
long int digits(long int num){
	int i=0;
	while(num!=0){
		i++;
		if(num%10==4){
			findex=i;
		}
		num=num/10;
	}
	return i;
}
void process(long int n){
	long int num=digits(n),i;
	int *b;
	int *d=(int *)malloc(num*sizeof(int));
	b=(int *)malloc(num*sizeof(int));
	for(i=1;i<=num;i++){
		b[i]=0;
		d[i]=n%10;
		if(d[i]==4){
			d[i]-=1;
			b[i]+=1;
		}
		n=n/10;
	}
	printa(d,num);
	printb(b,num);
}
int main(){
	int t,r=1;
	long int n;
	scanf("%d",&t);
	while(t--){
		scanf("%ld",&n);
		printf("case #%d:",r);
		process(n);
		r++;
	}
	return 0;
}