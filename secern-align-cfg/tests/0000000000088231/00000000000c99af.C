#include<stdio.h>
int main(){
    long unsigned int N,A,B,NC;
    int i,x = 1,a, p;
    //printf("\nEnter the no. of test cases: ");
    scanf("%d",&i);
    while(i-->0){
        //printf("\nEnter the value of N: ");
        scanf("%lu",&N);
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
        printf("Case #%d: %lu %lu",x++,A,B);
    }
    return 0;
}