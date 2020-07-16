#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
	int A[26];
	struct node* next[26];
}NODE;
NODE* init(){
	NODE* s;
	s = (NODE*)malloc(sizeof(NODE));
	int i;
	for(i=0;i<26;i++){
		s->A[i]=0;
		s->next[i] = NULL;
	}
	return s;
}
void add(NODE* s,char* inp,int i){
	if(i<0){
		return;
	}
	if(s->A[inp[i]-'A'] == 0){
		s->next[inp[i]-'A']=init();
	}
	s->A[inp[i]-'A']+=1;
	add(s->next[inp[i]-'A'],inp,i-1);
}
int find(NODE* s,int* remov){
	int i;
	int ans;
	int rem;
	int tmp;
	int cumremov;
	cumremov = 0;
	ans = 0;
	tmp = 0;
	for(i=0;i<26;i++){
		if(s->A[i]>1){
			ans+=find(s->next[i],&tmp);
			rem = s->A[i]-tmp;

			if(rem>1){
				ans+=2;
			}
			cumremov +=s->A[i];
			tmp = 0;
		}
		if(s->A[i]>0){
			free(s->next[i]);
			s->next[i] = NULL;
		}
	}
	*remov = cumremov;
	return ans;
}
int main(){
	char inp[55];
	int t;
	int n;
	int i,x;
	int rem;
	NODE* start;
	
	int ans;
	scanf("%d",&t);
	for(x=0;x<t;x++){
		start = init();
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%s",inp);
			add(start,inp,strlen(inp)-1);
		}
		rem = 0;
		ans = find(start,&rem);
		if(x>0){
			printf("\n");
		}
		printf("Case #%d: %d",x+1,ans);
		free(start);
		start = NULL;
	}
	return 0;
}