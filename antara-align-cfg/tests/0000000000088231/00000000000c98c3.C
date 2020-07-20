#include<stdio.h>
int main(){
    long int N,A,B,NC;
    int i,x = 1,a, p;
    //printf("\nEnter the no. of test cases: ");
    scanf("%d",&i);
    while(i-->0){
        //printf("Enter the value of N: ");
        scanf("%ld",&N);
        NC = N;
        A = N;
        p = 1;
		a = 0;
        while(NC>0){
            a = NC % 10;
            NC /= 10;
            if(a == 4)
                A = A - p;
            p*=10;
        }
        B = N - A;
        printf("Case #%d: %ld %ld",x++,A,B);
    }
    return 0;
}