#include <stdio.h>
#include <string.h>

int main()
{
    int N[100];
    int A[100];
    int B[100];
    memset(N, 0, sizeof(int) * 100);
    memset(A, 0, sizeof(int) * 100);
    memset(B, 0, sizeof(int) * 100);

    int testCaseCount;
    int testCase[100];
    memset(testCase, 0, sizeof(int) * 100);
    int num[100];
    memset(num, 0, sizeof(int) * 100);

    int retA = 0;
    int retB = 0;
    int digit = 1;

    scanf("%d", &testCaseCount);
    for(int i = 0; i < testCaseCount; i++){
        scanf("%d", &testCase[i]);
    }

    for(int j = 0; j < testCaseCount; j++){


        for(int i = 0; i < 100; i++){
            N[i] = testCase[j] % 10;
            testCase[j] /= 10;
        }
        memcpy(A, N, sizeof(int) * 10);

        for(int i = 0; i < 100; i++){
            if(N[i] == 4){
                A[i] = 2;
                B[i] = 2;
            }
        }

        digit = 1;
        for(int i = 0; i < 100; i++){
            retA += A[i] * digit;
            digit *= 10;
        }
        digit = 1;
        for(int i = 0; i < 100; i++){
            retB += B[i] * digit;
            digit *= 10;
        }

        printf("Case #%d: %d %d\n", j + 1, retA, retB);
        memset(N, 0, sizeof(int) * 100);
        memset(A, 0, sizeof(int) * 100);
        memset(B, 0, sizeof(int) * 100);
        retA = 0;
        retB = 0;


    }
    return 0;
}

