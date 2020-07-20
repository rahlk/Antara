#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int GetFirstPrime(int num) {
    int check = (int)floor(sqrt((double)num));
    int i, result;    
    for (i = 2; i <= check; i++) {
        if (num % i == 0) {
            result = i;
            break;
        }
    }

    return result;
}

int IndexOfMin(int list[], int len) {
    int min = list[0];
    int i, result = 0;
    for (i = 1; i < len; i++) {
        if (list[i] < min) {
            min = list[i];
            result = i;
        }
    }

    return result;
}

int Min(int list[], int len) {
    int min = list[0];
    int i, result = 0;
    for (i = 1; i < len; i++) {
        if (list[i] < min) {
            min = list[i];
            result = i;
        }
    }

    return min;
}

int main() {
    int test;
    scanf("%d", &test);
    int opCase = 1;
    while(test--) {
        int n = 0, cipherNum = 0, first = 0, second = 0, currentMin = 0;
        int i = 0, l = 0, currentMinIndex = 0, start = 65;
        scanf("%d", &n);
        scanf("%d", &l);

        if (l >= 25 && l <= 100 && n >= 101 && n <= 10000) {
            int cipher[l];
            int decipherPrims[l+1];
            char decipherText[l+2];
            for (i = 0; i < l; i++) {
                scanf("%d", &cipherNum);
                cipher[i] = cipherNum;
            }
            first = GetFirstPrime(cipher[0]);
            second = cipher[0] / first;
            if (cipher[1] % first == 0) {
                decipherPrims[0] = second;
                decipherPrims[1] = first;
                decipherPrims[2] = cipher[1] / first;
            }
            else if(cipher[1] % second == 0) {
                decipherPrims[0] = first;
                decipherPrims[1] = second;
                decipherPrims[2] = cipher[1] / second;
            }
            for (i = 2; i < l; i++) {
                decipherPrims[i+1] = cipher[i] / decipherPrims[i];            
            }
            for(i = 0; i < l+1; i++) {
                currentMinIndex = IndexOfMin(decipherPrims, l+1);
                currentMin = Min(decipherPrims, l+1);

                if (currentMin != n + 1) {
                    decipherText[currentMinIndex] = (char)start;
                    decipherPrims[currentMinIndex] = n + 1;
                    if (currentMin != Min(decipherPrims, l+1))
                        start++;
                }
                else
                    break;
            }
            decipherText[l+1] = '\0';
            printf("Case #%d: %s\n", opCase, decipherText);
            opCase++;
        }
    }
    
    return 0;
}