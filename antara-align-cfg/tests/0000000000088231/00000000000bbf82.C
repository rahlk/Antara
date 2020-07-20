#include<stdio.h>
int check(int n){
	int a,b=0;
	while(n>0){
	a=n%10;
	if(a==4){
	b=1;
	break;    
	}
	n=n/10;}
	return b;
}
void main(){
	 int n,num,j,a,i;
	scanf("%d",&n);
	for(int m=1;m<=n;m++){
		scanf("%d",&num);
		a=-1;
		
		for(i=1;i<num;i++){
			for(j=i;j<num;j++){
				if(i+j==num && check(i)==0 && check(j)==0){
				    a=i;
						break;	}}
			if(a==i)
			break;
			
			}
		
		printf("case #%d: %d %d",m,i,j);
		printf("\n");}
	}