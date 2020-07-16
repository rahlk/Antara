#include <stdio.h>
#include <stdlib.h>

int testfour(n){
	while(n>0){
		if(n%10==4){
			return 1;}
		else{
			n = n/10;}
	return 0;
	}
}
int t,i,n,a,b;
int main()
{
scanf("%d",&t);
for(i=1;i<t+1;i++){
	scanf("%d",&n);
     a = n/2;
     b = n-a;
     int isFour;
     if(testfour(a)==1 || testfour(b)==1){
         isFour = 1;
     }
        while(isFour==1){
            if(testfour(a)==1){
                while(testfour(a)==1){
                    a += a/2;
                    b += -a/2;
                    testfour(a);
                }
            }
            isFour = 1;
            if(testfour(b)==1){
                while(testfour(b)==1){
                    b += -b/2;
                    a += b/2;
                    testfour(b);
                }
            }

        }
        printf("Case #%d : %d %d \n",i,a,b);

     }

    return 0;
}
