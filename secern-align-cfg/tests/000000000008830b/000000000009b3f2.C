#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable:4996)

#ifndef BOOL
#define BOOL char
#define TRUE 1
#define FALSE 0
#endif


BOOL isDuplicate(int n, int poolSize, unsigned int*pool);
int GetPrimes(int n);
int qsortComp(const void*a, const void*b);
char GetLetter(int n, int*pool);


typedef struct LinkedList{
	int caseNo;
	int N;
	int L;
	int*pCiphers;
	struct LinkedList*next;
}LinkedList;

LinkedList* NewLink(LinkedList*current);

int main()
{
	int iTestCases = 0, iN = 0, iL = 0, i = 0, j = 0, k = 0, nFoundPrimes = 0, *Ciphers, FoundPrimes[26] = { 0, }, iNewPrime = 0, *CipherOrder;
	int altEven = 0, altOdd = 0;
	LinkedList*pHead, *pCurrent,*pToFree;
	BOOL bFound = FALSE;

	pHead = (LinkedList*)malloc(sizeof(LinkedList));
	pCurrent = pHead;

	scanf("%d", &iTestCases);
	for (i = 0; i < iTestCases; i++) {
		scanf("%d %d", &iN, &iL);
		Ciphers = (int*)malloc(iL * sizeof(int));
		for (j = 0; j < iL; j++) {
			scanf("%d", &Ciphers[j]);
		}
		pCurrent->caseNo = i + 1;
		pCurrent->N = iN;
		pCurrent->L = iL;
		pCurrent->pCiphers = Ciphers;
		pCurrent = NewLink(pCurrent);
	}

	pCurrent = pHead;

	for (i = 0; i < iTestCases; i++) {
		iNewPrime = GetPrimes(pCurrent->pCiphers[0]);
		memset(FoundPrimes, 0, sizeof(int) * 26);
		nFoundPrimes = 0;
		FoundPrimes[0] = iNewPrime;
		CipherOrder = (int*)malloc(sizeof(int)*(pCurrent->L + 1));
		
		if (iNewPrime != pCurrent->pCiphers[0] / iNewPrime) {
			FoundPrimes[1] = pCurrent->pCiphers[0] / iNewPrime;
			CipherOrder[0] = FoundPrimes[0];
			CipherOrder[1] = FoundPrimes[1];
			nFoundPrimes = 2;
		}
		else {
			nFoundPrimes = 1;
			CipherOrder[0] = FoundPrimes[0];
			CipherOrder[1] = FoundPrimes[0];
		}

		for (j = 1; j < pCurrent->L; j++) {
			if (bFound == FALSE) {
				if (pCurrent->pCiphers[j] % CipherOrder[j] == 0) {
					iNewPrime = pCurrent->pCiphers[j] / CipherOrder[j];
					if (isDuplicate(iNewPrime, nFoundPrimes, FoundPrimes) == TRUE) {
						CipherOrder[j + 1] = iNewPrime;
					}
					else {
						bFound = TRUE;
						CipherOrder[j + 1] = iNewPrime;
						FoundPrimes[nFoundPrimes] = iNewPrime;
						nFoundPrimes++;
					}
				}
				else if (pCurrent->pCiphers[j] % CipherOrder[j] != 0) {
					bFound = TRUE;
					iNewPrime = pCurrent->pCiphers[j] / CipherOrder[j - 1];
					altOdd = CipherOrder[j];
					altEven = CipherOrder[j - 1];
					CipherOrder[j + 1] = iNewPrime;
					for (k = 0; k <= j; k++) {
						if (k % 2 == 0) {
							CipherOrder[k] = altEven;
						}
						else {
							CipherOrder[k] = altOdd;
						}
					}
					CipherOrder[j + 1] = iNewPrime;
					if (isDuplicate(iNewPrime, nFoundPrimes, FoundPrimes) == FALSE) {
						FoundPrimes[nFoundPrimes] = iNewPrime;
						nFoundPrimes++;
					}
				}
			}
			else {
				iNewPrime = pCurrent->pCiphers[j] / CipherOrder[j];
				CipherOrder[j + 1] = iNewPrime;
				if (nFoundPrimes != 26) {
					if (isDuplicate(iNewPrime, nFoundPrimes, FoundPrimes) == FALSE) {
						FoundPrimes[nFoundPrimes] = iNewPrime;
						nFoundPrimes++;
					}
				}
			}
		}
		qsort(FoundPrimes, 26, sizeof(int), qsortComp);
		printf("Case #%d: ", pCurrent->caseNo);
		for (j = 0; j <= pCurrent->L; j++) {
			printf("%c", GetLetter(CipherOrder[j], FoundPrimes));
		}
		pToFree = pCurrent;
		pCurrent = pCurrent->next;
		free(CipherOrder);
		free(pToFree);
		printf("\n");
	}
		

	return 0;
}

int GetPrimes(int n)
{
	int i;

	for (i = 2; i < n; i++) {
		if (n%i == 0) return i;
	}
}

BOOL isDuplicate(int n, int poolSize, unsigned int*pool)
{
	int i = 0;
	for (i = 0; i < poolSize; i++) {
		if (n == pool[i]) return TRUE;
	}
	return FALSE;
}

int qsortComp(const void*a, const void*b)
{
	if (*(int*)b < *(int*)a) return 1;
	if (*(int*)a == *(int*)b) return  0;

	return -1;
}

char GetLetter(int n, int*pool)
{
	int i;
	for (i = 0; i < 26; i++) {
		if (n == pool[i]) return (char)i + 65;
	}
}

LinkedList* NewLink(LinkedList*pList)
{
	LinkedList*pNode;
	pNode = (LinkedList*)malloc(sizeof(LinkedList));
	memset(pNode, 0, sizeof(LinkedList));
	pList->next = pNode;
	return pNode;
}