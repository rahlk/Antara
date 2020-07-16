#include<stdio.h>
int u,s,t;
myrand(int max){
	return (rand()%max);
}
check(int a){
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
		do{s=myrand(u);
		t=u-s;}while(check(s)==1 || check(t)==1);
		printf("%d %d\n",s,t);
		}
}

