#include<stdio.h>
#include<stdlib.h>

int GCD(int a, int b){
	int tmp;
	while(a){
		if(a < b){
			tmp = a;
			a = b;
			b = tmp;
		}
		a = a - b;
	}
	return b;
}

int bubbleSort(int* arr, int len){
	for(int i = 0 ; i < len - 1 ; i++){
		for(int j = 0 ; j < len - 1 - i ; j++){
			if(arr[j] > arr[j+1]){
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	return 0;
}

char plaintextEncoder(int*arr, int num){
	int head = 0, tail = 25, key;

	while(1){
		key = (head + tail)/2;
		if(arr[key] == num){
			break;
		}
		else{
			if(arr[key] > num){
				tail = key - 1;
			}
			else{
				head = key + 1;
			}
		}
	}
	return 'A' + key;
}

int main(void){
	int testNum;
	scanf("%d", &testNum);
	//printf("testNum: %d\n", testNum);

	for(int i = 0 ; i < testNum ; i++){
		int N, L, ch = 0;
		scanf("%d %d", &N, &L);
		//printf("%d %d\n", N, L);
		
		int* lrr = (int*)malloc(sizeof(int)*(L+1));
		int a, b, gcd;

		//decode to prime number
		for(int j = 0 ; j < L ; j++){
                        int num;
			scanf("%d", &num);
			//printf("%d ", num);

			if(j == 0 ){
				a = num;
			}
			else if(j == 1){
				b = num;
				gcd = GCD(a, b);
				lrr[0] = a / gcd;
				lrr[1] = gcd;
				gcd = b / gcd;
				lrr[2] = gcd;
			}
			else{
				gcd = num / gcd;
				lrr[j+1] = gcd;
			}
		}

		int* arr = (int*)malloc(sizeof(int)*26);
		int cnt = 0;

		//find encoding table
		for(int j = 0 ; cnt < 26 ; j++){
			int k;
			for(k = 0 ; k < cnt ; k++){
				if(lrr[j] == arr[k]) break;
			}
			if(k == cnt){
				arr[cnt] = lrr[j];
				cnt++;
			}
		}
		bubbleSort(arr, 26);

		/*for(int j = 0 ; j < 26 ; j ++){
			printf("%d ", arr[j]);
		}
		printf("\n");*/

		//encode plaintext
		printf("Case #%d: ", i+1);		
		for(int j = 0 ; j < L+1 ; j++){
			printf("%c", plaintextEncoder(arr, lrr[j]));
		}
		printf("\n");
	}
	return 0;
}
