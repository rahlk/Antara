#include <stdio.h>
#include <stdbool.h>

void printCaseAnswer(int A, int B, int caseNumber){
    printf("Case #%d: %d %d\n", caseNumber, A, B);
}


int algorithmR(int n, int base){
    bool includeDigit = false;
    if(n == 0)
        return 0;
    if(n%10 == 4){
        includeDigit = true;
    }
    return includeDigit*base + algorithmR(n/10, base*10);
}

int algorithm(int N){
    return algorithmR(N, 1);
}


int main(){
    int T = 0;
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++){
        int N = 0;
        scanf("%d", &N);
        
        int numbers[2] = {0, 0};
        int B = algorithm(N);
        int A = N - B;
        printCaseAnswer(A, B, i+1);
    }
    
    return 0;
}