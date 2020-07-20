#include <stdio.h>
#include <math.h>

// typedef struct List{
// 	int number;
// 	struct List * next;
// } List;

// List * append(List * head, int key){
// 	List * hd = head;
// 	List * node = (List *)malloc(sizeof(List));
// 	node->number = key;
// 	node->next = NULL;

// 	if(head==NULL){
// 		head = node;
// 		return head;
// 	}

// 	while(hd->next!=NULL){
// 		hd = hd->next;
// 	}
// 	hd->next = node;
// 	return head;
// }

int power(int index){
	int prod = 1;
	for(int i = 1; i<=index; i++){
		prod = prod * 10;
	}
	return prod;
}

int main(){
	int T;
	scanf("%d",&T);

	for(int i = 0; i<T; i++){
		int n;
		scanf("%d", &n);
		int index = 0;
		int sum = 0;
		int m = n;
		while(m!=0){
			if(m%10 == 4) sum = sum + 2*power(index);
			index = index+1;
			m = m/10;
		}
		m = n-sum;
		printf("case #%d: %d %d\n", (i+1),m,sum);
	}
	return 0;
}