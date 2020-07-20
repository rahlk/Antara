#include<stdio.h>
#include<stdlib.h>
int myrand(int,int);
int check(int);
int main()
{
	int i,u,s,t;
	scanf("%d",&i);
	while(i--){
		scanf("%d",&u);
		do{s=myrand(0,u);
		t=u-s;}while(check(s)==1 || check(t)==1);
		printf("%d\t%d\n",s,t);
		}
	return 0;
}
int myrand(int min,int max){
	int e;
	e=min+rand()%(max-min);
	return e;
}
int check(int a){
	int rem;
	while(a!=0){
		rem=a%10;
		if(rem==4)
				return 1;
		if(rem<0)
			return 0;
		a/=10;
	}
}
