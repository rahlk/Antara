#include<stdio.h>
#include<math.h>

int main() {
    int T;
    int i = 0;
    int N;
    int A, B;
    int total_digits, d;
   scanf("%d", &T);
   
   for (i=0; i < T; ++i){
       scanf("%d", &N);
       A=0;
       total_digits=0;
       while(N > 0){
           d = N%10;
           if(d==4){
                A += 3*pow(10, total_digits);
           }
           else{
               A += d*pow(10, total_digits);
           }
           N = N/10;
           total_digits++;
       }
       
       B = N - A;
       printf("Case #%d: %d %d\n", A, B);
   }
   
}
