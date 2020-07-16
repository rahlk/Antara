#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int power(int, int);
int contfour(int);

int main(){
	int T,N;
	int test; // loop variables
	int A,B;
	int a,b; // temporary variables
	scanf("%d",&T);
	for ( test = 1; test <= T; test++){
		//printf("Enter N : ");
		scanf("%d",&N);
		A=N-1;
		B=1;
		a=contfour(A);
		b=0;
		while ( ( a != 0 ) || (  b != 0 )){
			//printf("a=%d and b= %d\n",a,b);
			if ( a > b){
				A= ( A/power(10,a-1) -1 ) * power(10,a-1) + ( power(10,a-1) -1);
				B=N-A;
			}
			else{
				B= ( B/power(10,b-1) +1 ) * power(10,b-1);
				A = N-B;
			}
			//printf("A=%d and B=%d\n",A,B);
			a=contfour(A);
			b=contfour(B);
		}
		printf("Case #%d: %d %d\n",test,A,B);
	}
	return 0;
}
int power(int b , int e){
	int r=1;
	int x=b;
	while ( e != 0){
		if ( e & (1) == 1 )
			r = x*r;
		x= x*x;
		e = e>> 1;
	}
	return r;
}

int contfour(int N){
	int temp,length;
	temp = N;
	length=0;
	while ( temp != 0 ){
		length = length + 1;
		temp = temp/10;
	}
	int idigit=0 , digit;
	while ( (idigit == 0 ) && ( length != 0 )){
		digit = ( N / power( 10, length -1 )) % 10;
		if ( digit == 4 ){
			idigit = length;
			break;
		}
		length  = length-1;
	}
	return idigit;
}
