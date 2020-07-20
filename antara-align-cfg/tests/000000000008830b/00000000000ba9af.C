#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void quick_sort(int* arr, int start, int end) {

	if( start >= end ) {
		return;
	}

	int pivot = start;
	int i = start, j = end;
	int temp = 0;

	while( i < j ) {
		while(arr[i] <= arr[pivot]) {
			i++;
		}
		while(arr[j] > arr[pivot] ) {
			j--;
		}
		if( i < j ) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		else {
			temp = arr[pivot];
			arr[pivot] = arr[j];
			arr[j] = temp;
		}
	}
	quick_sort(arr, start, j-1);
	quick_sort(arr, j+1, end);

}

void removeReapted(int* arr, int size)
{

    int i, j, k;

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j; k<size; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }
}

int main()
{
    int testCaseCount = 0;
    scanf("%d\n", &testCaseCount);
    for(int i = 0; i < testCaseCount; i++){

    int N;
    int charCount;
    int *secret_arr;
    int *solved_arr;
    scanf("%d %d\n", &N, &charCount);
    secret_arr = (int *)malloc(sizeof(int) * charCount);
    solved_arr = (int *)malloc(sizeof(int) * (charCount + 1));
    char* solved_str = (char *)malloc(sizeof(char) * (charCount + 2));

    for(int i = 0; i < charCount; i++){
        scanf("%d", &secret_arr[i]);
    }

    int *primeArr;
    int curElemCount = 0;

    primeArr = (int *)malloc(sizeof(int) * N);

    for(int i = 2; i <= N; i++){
        if(curElemCount == 0){
            primeArr[curElemCount] = i;
            curElemCount++;
        } else {
            int isPrime = 0;
            for(int j = 0; j < curElemCount; j++){
                if(i % primeArr[j] == 0){
                    break;
                }
                isPrime++;
            }
            if(isPrime == curElemCount){
                primeArr[curElemCount] = i;
                curElemCount++;
            }
        }
    }

    for(int i = 0; i < curElemCount; i++){
        if(secret_arr[0] % primeArr[i] == 0 && secret_arr[1] % primeArr[i] == 0){
            solved_arr[0] = secret_arr[0]/primeArr[i];
            solved_arr[1] = primeArr[i];
            solved_arr[2] = secret_arr[1]/primeArr[i];
        }
    }

    int common_divider = solved_arr[2];
    for(int j = 3; j < charCount + 1; j++){
        solved_arr[j] = secret_arr[j-1]/common_divider;
        common_divider = solved_arr[j];
    }


    int MIN_INT = N;

    for(int i = 0; i < charCount + 1; i++){
        if(solved_arr[i] < MIN_INT){
            MIN_INT = solved_arr[i];
        }
    }

    int sorted[charCount];
    memcpy(sorted, solved_arr, sizeof(int) * (charCount + 1));
    quick_sort(sorted, 0, charCount);
    removeReapted(sorted, charCount + 1);

    for(int i = 0; i < charCount + 1; i++){
        for(int j = 0; j < 26; j++){
            if(solved_arr[i] == sorted[j]){
                solved_str[i] = 'A' + j;
            }
        }
    }
    printf("Case #%d: ", i + 1);
    for(int i = 0; i < charCount + 1; i++){
        printf("%c", solved_str[i]);
    }
    free(secret_arr);
    free(solved_arr);
    free(solved_str);
    free(primeArr);
    }
    return 0;
}