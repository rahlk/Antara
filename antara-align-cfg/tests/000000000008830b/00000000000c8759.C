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
    int checkRange = size;
      for(int tx=0; tx<checkRange; tx++){
            while (arr[tx]==arr[tx+1]){
                for (int ty=tx; ty<checkRange; ty++){
                    arr[ty] = arr[ty+1];
                }
                checkRange--;
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

    for(int i = 2; i < N; i++){
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
            break;
        }
    }

    int common_divider = solved_arr[2];
    for(int j = 3; j < charCount + 1; j++){
        solved_arr[j] = secret_arr[j-1]/common_divider;
        common_divider = solved_arr[j];
    }




    int sorted[charCount];
    memcpy(sorted, solved_arr, sizeof(int) * (charCount + 1));
    quick_sort(sorted, 0, charCount);
    removeReapted(sorted, charCount + 1);
    int real_sorted[26];
    memcpy(real_sorted, sorted, sizeof(int) * 26);


    for(int i = 0; i < charCount + 1; i++){
        for(int j = 0; j < 26; j++){
            if(solved_arr[i] == real_sorted[j]){
                solved_str[i] = 'A' + j;
            }
        }
    }

    solved_str[charCount + 1] = '\0';
    printf("Case #%d: ", i + 1);
    for(int i = 0; i < charCount + 1; i++){
        printf("%c", solved_str[i]);
    }
    printf("\n");

    free(secret_arr);
    free(solved_arr);
    free(solved_str);
    free(primeArr);

    }
    return 0;
}