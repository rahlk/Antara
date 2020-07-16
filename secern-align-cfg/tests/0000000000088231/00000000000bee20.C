#include<stdio.h>
int i,u,s,t;
int myrand(int min,int max){
	int e;
	e=min+rand()%(max-min);
	return e;
}
int check(int a){
	int rem;
	while(a>0){
		if(a%10==4)
			return 1;
			break;
		a/=10;
	}
}
main()
{
	scanf("%d",&i);
	while(i--){
		scanf("%d",&u);
		do{s=myrand(0,u);
		t=u-s;}while(check(s)==1 || check(t)==1);
		printf("%d\t%d\n",s,t);
		}
}

