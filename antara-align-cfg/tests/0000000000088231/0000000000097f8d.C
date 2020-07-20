#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
        int t,j,n,n1,n2,i,digit,nDigits;
        scanf("%d",&t);
        for(j=0;j<t;j++){
            n1=0;
            n2=0;
            scanf("%d",&n);
	
            nDigits = floor(log10(abs(n))) + 1;
        

            for(i=0;i<nDigits;i=i+1){
                digit=((n%(int)pow(10,i+1))/pow(10,i));
		if(digit==4){
			n1=n1+1*pow(10,i);
                        n2=n2+3*pow(10,i);
		}
		else{
                        n2=n2+digit*pow(10,i);

			
    		}
	    }
	    printf("%d %d\n",n1,n2);
	}
}	