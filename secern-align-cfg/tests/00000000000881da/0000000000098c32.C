#include <stdio.h>
#include <string.h>

#pragma warning (disable:4996)

typedef struct LinkedList {
	int caseNo;
	char*str;
	struct LinkedList*next;
}LinkedList;

LinkedList* NewLink(LinkedList*current);

int main()
{
	int iTestCases = 0, i = 0, j = 0, arrGrids[100] = { 0, }, nMoves = 0;
	char *str;
	LinkedList*pHead,*pCurrent;
	pHead = (LinkedList*)malloc(sizeof(LinkedList));
	memset(pHead, 0, sizeof(LinkedList));
	pCurrent = pHead;

	scanf("%d", &iTestCases);
	for (i = 0; i < iTestCases; i++) {
		scanf("%d", &arrGrids[i]);
		str = (char*)malloc(sizeof(char)*((2 * arrGrids[i]) - 1));
		scanf("%s", str);
		pCurrent->caseNo = i + 1;
		pCurrent->str = str;
		pCurrent = NewLink(pCurrent);
	}
	pCurrent = pHead;
	for (i = 0; i < iTestCases; i++) {
		printf("Case #%d: ", (i + 1));
		nMoves = strlen(pCurrent->str);
		for (j = 0; j < nMoves; j++) {
			if (pCurrent->str[j] == 'E') {
				printf("S");
			}
			else {
				printf("E");
			}
		}
		printf("\n");
		pCurrent = pCurrent->next;
	}

	return 0;
}

LinkedList* NewLink(LinkedList*pList)
{
	LinkedList*pNode;
	pNode = (LinkedList*)malloc(sizeof(LinkedList));
	memset(pNode, 0, sizeof(LinkedList));
	pList->next = pNode;
	return pNode;
}