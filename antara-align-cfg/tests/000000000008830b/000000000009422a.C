#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
	char*str;
	struct LinkedList*next;
}LinkedList;

LinkedList* NewLink(LinkedList*current);

int main()
{
	int iTestCase = 0, iN = 0, iL = 0, i = 0, j = 0, k = 0, nFoundPrimes = 0, *Ciphers = { 0, }, FoundPrimes[26] = { 0, }, iNewPrime = 0, *CipherOrder;
	int altEven = 0, altOdd = 0;
	char*strAns;
	LinkedList*pHead, *pCurrent;
	BOOL bFound = FALSE;

	pHead = (LinkedList*)malloc(sizeof(LinkedList));
	pCurrent = pHead;

	scanf("%d", &iTestCase);
	for (i = 0; i < iTestCase; i++) {
		scanf("%d %d", &iN, &iL);

		CipherOrder = (int*)malloc((iL + 1) * sizeof(int));
		Ciphers = (int*)malloc(iL * sizeof(int));

		scanf("%d", Ciphers);
		iNewPrime = GetPrimes(Ciphers[0]);
		FoundPrimes[0] = iNewPrime;
		if (iNewPrime != Ciphers[0] / iNewPrime) { //if first two letters are different
			FoundPrimes[1] = Ciphers[0] / iNewPrime;
			CipherOrder[0] = FoundPrimes[0];
			CipherOrder[1] = FoundPrimes[1];
			nFoundPrimes = 2;
		}
		else { //if first two letters are same
			nFoundPrimes = 1;
			CipherOrder[0] = FoundPrimes[0];
			CipherOrder[1] = FoundPrimes[0];
		}
		for (j = 1; j < iL; j++) {
			scanf("%d", Ciphers + j);
			if (bFound == FALSE) { //first two letters may have been alternating and can't define correct order until third letter is introduced
				if (Ciphers[j] % CipherOrder[j] == 0) {
					iNewPrime = Ciphers[j] / CipherOrder[j];
					if (isDuplicate(iNewPrime, nFoundPrimes, FoundPrimes) == TRUE) { //past letters still may be flipped
						CipherOrder[j+1] = iNewPrime;
					}
					else { //Can be sure past letters don't need flipping
						bFound = TRUE;
						CipherOrder[j+1] = iNewPrime;
						FoundPrimes[nFoundPrimes] = iNewPrime;
						nFoundPrimes++;
					}
				}
				else if (Ciphers[j] % CipherOrder[j] != 0) { //past letters needs to be flipped
					bFound = TRUE;
					iNewPrime = Ciphers[j]/CipherOrder[j-1];
					altOdd = CipherOrder[j];
					altEven = CipherOrder[j - 1];
					CipherOrder[j + 1] = iNewPrime;
					for (k = 0; k <= j; k++) {
						if (k % 2 == 0) {
							CipherOrder[k] = altEven;
						}
						else CipherOrder[k] = altOdd;
					}
					CipherOrder[j + 1] = iNewPrime;
					if (isDuplicate(iNewPrime, nFoundPrimes, FoundPrimes) == FALSE) {
						FoundPrimes[nFoundPrimes] = iNewPrime;
						nFoundPrimes++;
					}
				}
			}
			else {
				iNewPrime = Ciphers[j] / CipherOrder[j];
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
		strAns = (char*)malloc(sizeof(char)*(iL + 2));
		memset(strAns, 0, sizeof(char)*(iL + 2));
		for (j = 0; j <= iL; j++) {
			strAns[j] = GetLetter(CipherOrder[j], FoundPrimes);
		}
		pCurrent->caseNo = i + 1;
		pCurrent->str = (char*)malloc(sizeof(char)*(iL + 2));
		memcpy(pCurrent->str, strAns, sizeof(char)*(iL + 2));
		pCurrent = NewLink(pCurrent);
		free(strAns);
		free(CipherOrder);
		free(Ciphers);
	}
	pCurrent = pHead;
	for (i = 0; i < iTestCase; i++) {
		printf("Case #%d: %s\n", pCurrent->caseNo, pCurrent->str);
		pCurrent = pCurrent->next;
	}

	system("PAUSE");
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