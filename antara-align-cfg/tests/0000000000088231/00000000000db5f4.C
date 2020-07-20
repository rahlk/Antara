#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int testfour(n){
	while(n>0){
		if(n%10==4){
			return 1;}
		else{
			n = n/10;}
	}
	return 0;
}
int t,i,n,a,b,test,m;
int main()
{
scanf("%d",&t);
for(i=1;i<t+1;i++){
	scanf("%d",&n);
	a=n-1;
	b=1;
	if(testfour(n)==1){printf("Four FOund\n");}else{printf("Four Not Found;\n");}
	if(testfour(n)==1){
	    test=n;
    for(int i=0;i<((int)log10(n)+1);i++){
        if(testfour(test%10)==1){
            a = a-(int)pow(10,i);
            b = n-a;
        }
        test = test/10;
    }
    }
     printf("Case #%d : %d %d \n",i,a,b);
	}
	return 0;
	}



