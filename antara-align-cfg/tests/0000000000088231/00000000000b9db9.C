#include<stdio.h>
int check(int n){
	int a,b=0;
	while(n>0){
		
	
	a=n%10;
	if(a==4){
		
	
	b=1;}
	n=n/10;}
	return b;
}
void main(){
	int n,flag,num,j,a,b,i,c,d;
	scanf("%d",&n);
	for(int m=1;m<=n;m++){
		scanf("%d",&num);
		a=-1;
		
		for(i=0;i<num;i++){
			for(j=0;j<num;j++){
				if(i+j==num){
					c=check(i);d=check(j);
					if(c==0  && d==0){
						
						a=i;b=j;
						break;
						
					}
					
				}
				
				
			}
			if(a==i)
			break;
			
			}
		
		printf("case #%d: %d %d",m,a,b);
		printf("\n");}
	}