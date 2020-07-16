#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct node
{
	struct node *childNode[26];
	int end;
	int count;
};

struct node root[10000];
int index1 = 1;
int totalCount = 0;
struct node* allocNode() {
	index1++;
	for (int i = 0; i < 26; i++)
		root[index1 - 1].childNode[i] = NULL;
	
	root[index1 - 1].count = 0;
	root[index1 - 1].end = 0;
	return &root[index1 - 1];
}

int insertNode(char data[51])
{
	int length = strlen(data);
	struct node *pNode = root;
	int i, j;
	for (i = length - 1; i >= 0; i--)
	{
		j = data[i] - 'A';
		if (!pNode->childNode[j])
			pNode->childNode[j] = allocNode();
		pNode->count = pNode->count + 1;
		pNode = pNode->childNode[j];
		
	}
	pNode->end = true;
	return 0;
}

int findPair(struct node *pNode)
{
	int i, j=0;

	if (pNode->count < 2 || pNode->end == 1)
		return pNode->count;
	int count = 0;

	for (i = 0; i < 26; i++)
	{
		if (pNode->childNode[j] != NULL) {
			j = findPair(pNode->childNode[j]);
			if (j > 1) {
				pNode->count = pNode->count - j;
				totalCount = totalCount + 1;
				
			}
			if (pNode->count > 1)
				totalCount = totalCount + (pNode->count / 2);
		}
	}
	return pNode->count;
}


int main() {
	int testcase = 1, testcase1 = 1;
	scanf("%d\n", &testcase);
	while (testcase > 0) {
		int i = 0,inputsize = 0;
		char inoutStr[51];
		scanf("%d\n", &inputsize);
		index1 = 1;
		totalCount = 0;
		while (inputsize > 0) {
			scanf("%s", &inoutStr[0]);
			inputsize--;
			insertNode(inoutStr);
		} 
		findPair(&root[0]);
		printf("Case #%d: %d", testcase1,totalCount);
		printf("\n");
		testcase--;
	}

}