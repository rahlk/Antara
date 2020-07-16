#include<stdio.h>
int check(int );
int main(){
int n,n1,f1;
scanf("%d",&n);
int i=0,j;
while(i<n){
	scanf("%d",&n1);
	f1=n1/2;
	j=check(f1);
	printf("%d ",j);
	printf("%d\n",n1-j);
	i++;
}
}
int check(int a){
	int f=a,h=0,r=0,up;
	while(a>0){
		r=a%10;
		if(r==4){a=f/2;up=a;h++;}
		a=a/10;
	}
	if(h!=0){
	return up;}else{return f;
	}
}