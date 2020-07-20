#include<stdio.h>
#include<stdlib.h>

struct node1{
	long x, y;
	char d;
};

struct node{
	int p;
	long q;
	struct node1 *list;
};

void creep(struct node input){
	long s = input.q, n = 0, w = input.q, e = 0;
	for (int i = 0; i < input.p; i++){
		if (input.list[i].d == 'N'&&n<input.list[i].y)
			n = input.list[i].y+1;
		else if (input.list[i].d == 'S'&&s>input.list[i].y)
			s = input.list[i].y - 1;
		if (input.list[i].d == 'E'&&e < input.list[i].x)
			e = input.list[i].x + 1;
		else if (input.list[i].d == 'W'&&w > input.list[i].x)
			w = input.list[i].x - 1;
	}
	printf(" %d %d\n",e,n);
	return;
}

int main(){
	int tests;
	scanf("%d", &tests);
	struct node *input = (struct node*)malloc(tests*sizeof(struct node));
	for (int i = 0; i < tests; i++){
		scanf("%d %d", &input[i].p, &input[i].q);
		input[i].list = (struct node1*)malloc(input[i].p*sizeof(struct node1));
		for (int j = 0; j < input[i].p; j++)
			scanf("%d %d %c", &input[i].list[j].x, &input[i].list[j].y, &input[i].list[j].d);
	}
	for (int i = 0; i < tests; i++){
		printf("Case #%d:", i + 1);
		creep(input[i]);
	}
	return 0;
}