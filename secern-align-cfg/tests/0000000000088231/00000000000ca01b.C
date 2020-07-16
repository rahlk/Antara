#include<stdio.h>
int check(int );
int main(){
int n,n1,f1;
scanf("%d",&n);
int i=1,j;
while(i<n+1){
	scanf("%d",&n1);
	f1=n1/2;
	j=check(f1);
	printf("Case #%d: %d",i,j);
	printf(" %d\n",n1-j);
	i++;
}
}
int check(int a){
	int f=a,i=0,r=0,up;
	while(a>0){
		r=a%10;
		if(r==4){a=f/2;up=a;i++;}
		a=a/10;
	}
	if(i!=0){
	return up;}else{return f;
	}
}