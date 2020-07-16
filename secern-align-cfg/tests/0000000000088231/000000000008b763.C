#include <stdio.h>
#include <math.h>
#define maxDigit 100

// remove digit "4"
void removeFour(int N, int* N1, int* N2){
    int length = 0;
    int decimal;
    int decimal1[maxDigit];
    int decimal2[maxDigit];
    int maxDigit = 0;
    while(1)
    {
        decimal = N%10;
        if (decimal == 4){
            decimal1[maxDigit] = 3;
            decimal2[maxDigit] = 1;
        }
        else{
            decimal1[maxDigit] = decimal;
            decimal2[maxDigit] = 0;
        }
        N = N/10;
        maxDigit++;
    }
    for (int i=0; i<maxDigit;i++){
        *N1 += decimal1[i] * pow(10,i);
        *N2 += decimal2[i] * pow(10,i);
    }
    return;
}

int main(){
    for(int T=0; T<=100;T++){
        int N, N1, N2;
        N1 = N2 = 0;
        scanf("%d", N);
        removeFour(N);
        printf("Case #%d: %d %d", T, &N1, &N2);
    }
}