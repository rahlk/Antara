#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isPrime[10001] = {0, };

void checkPrime(void){
    isPrime[0] = 1;
    isPrime[1] = 1;

    for(int x=2; x*x<10001; x++){
        for(int y=2; y<=10000/x; y++){
            isPrime[x*y] = 1;
        }
    }
}

char alphabetList[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {

    checkPrime();

	int numTestcase=0;
	scanf("%d", &numTestcase);


	for (int iter=0; iter<numTestcase; iter++){

		int N=0, L=0;
        scanf("%d %d", &N, &L);
		int *cipherText = (int*) malloc(sizeof(int)* L);
		char *plainText = (char*) malloc(sizeof(char)*(L+2));
        plainText[L+1] = '\0';

        for (int i=0; i<L; i++){
            scanf("%d", &cipherText[i]);
		}

		int start = 0;
		int temp1 = 0;
		int temp2 = 0;
		for(int curNum=2; curNum<=N; curNum++){
            if (isPrime[curNum]==1){
                continue;
            }
            if(cipherText[0] % curNum == 0){
                temp1 = curNum;
                temp2 = cipherText[0] / curNum;
                break;
            }
		}
		if (cipherText[1] % temp1 == 0){
            start = temp2;
		}
        else if (cipherText[1] % temp2 == 0){
            start = temp1;
        }

		int *decoded = (int*) malloc(sizeof(int)*(L+1));
		decoded[0] = start;
		for(int t=1; t<L+1; t++){
            decoded[t] = cipherText[t-1] / decoded[t-1];
		}

		int *forSort = (int*) malloc(sizeof(int)*(L+1));
		memcpy(forSort, decoded, sizeof(int)*(L+1));

		int temp = 0;
		for (int ti = 0; ti < L+1; ti++){
            for (int tj = 0; tj < L ; tj++){
                if (forSort[tj] >forSort[tj+1]){
                    temp = forSort[tj];
                    forSort[tj] = forSort[tj+1];
                    forSort[tj+1] = temp;
                }
            }
		}

		int checkRange = L;
		for(int tx=0; tx<checkRange; tx++){
            while (forSort[tx]==forSort[tx+1]){
                for (int ty=tx; ty<checkRange; ty++){
                    forSort[ty] = forSort[ty+1];
                }
                checkRange--;
            }
		}

		int *used_Prime = (int*) malloc(sizeof(int)*(26));
		memcpy(used_Prime, forSort, sizeof(int)*(26));

        for(int p=0; p<L+1; p++){
            for(int q=0; q<26; q++){
                if (decoded[p] == used_Prime[q]){
                    plainText[p] = 'A' + q;
                }
            }
        }


        printf("Case #%d: ", iter+1);
        for(int tmp=0; tmp<L+1; tmp++){
            printf("%c", plainText[tmp]);
        }
        printf("\n");

        //printf("Case #%d: %s\n", iter+1, plainText);

        memset(plainText, 0, sizeof(char)*(L+2));
        memset(decoded, 0, sizeof(int)*(L+1));
        memset(forSort, 0, sizeof(int)*(L+1));
        memset(used_Prime, 0, sizeof(int)*(26));

        free(cipherText);
        free(plainText);
        free(decoded);
        free(forSort);
        free(used_Prime);
	}
	return 0;
}