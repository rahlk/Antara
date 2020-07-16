#include <stdio.h>
#include <stdlib.h>

unsigned long long int mypow10 (unsigned long int exponent)
{
    unsigned long long int result = 1;
    while (exponent != 0)
    {
        result *= 10;
        --exponent;
    }
    return result;
}

unsigned long long int operate (unsigned long long int N,char *enChar,unsigned long long T)
{
    unsigned long long int i=0,check1=0,check2=0;
    unsigned long int  totalDigits=0;
    while (N!=0){
	N=N/10;
	totalDigits++;
    }

    for (i=0;i<totalDigits;i++){
	if (4==enChar[i]-48){ 
	    check1=check1+((enChar[i]-48)-1)*mypow10(totalDigits-1-i);
	    check2=check2+1*mypow10(totalDigits-1-i);
	} else {
	    check1=check1+((enChar[i]-48))*mypow10(totalDigits-1-i);
	}
    }

    printf("Case #%lld: %lld %lld\n",T+1,check1,check2);
    return 0;
}

int main (int argc, char *argv[])
{
    unsigned long long int N=0,T=0;
    T=atoll(argv[1]);
    for (unsigned long int i=0;i<T;i++ ) {
    	N=atoll(argv[2+i]);
	operate(N,argv[2+i],i);
    }
    return 0;
}
