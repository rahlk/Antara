#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int caseCount;
    scanf("%d", &caseCount);

    for(int i = 1; i <= caseCount; i++){
        int number;
        scanf("%d", &number);
        int storeNum = number;

        int digitIndex = 1;
        int anto = -1;
        while(number){
            int digit = number % 10;
            number /= 10;
            if (digit == 4){
                anto = digitIndex;
            }
            digitIndex++;
        }

        int secondDigit;
        if((storeNum % 2) == 0 ){
            secondDigit = (storeNum % (int)pow(10, anto)) / 2;
        } else {
            secondDigit = ((storeNum+ 1 % (int)pow(10, anto)) / 2) -1 ;
        }
        printf("Case #%d: %d %d\n", i, secondDigit, storeNum-secondDigit);
    }
}
