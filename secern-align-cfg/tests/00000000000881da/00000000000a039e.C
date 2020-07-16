#include<stdio.h>
#include<stdlib.h>

void path(int t,int n, char *str){
	int size = n*n;
	char* str1 = (char*)malloc(size*sizeof(char));
	int i = 0;
	for (;str[i]!='\0'; i++){
		if (str[i] == 'E')
			str1[i] = 'S';
		else
			str1[i] = 'E';
	}
	str1[i] = '\0';
	printf("Case #%d: %s\n", t, str1);
	return;
}
int main(){
	int n;
	scanf("%d", &n);
	char** str = (char**)malloc(n*sizeof(char*));
	int *array = (int*)malloc(n*sizeof(int));
	for (int i = 0; i < n; i++){
		scanf("%d", &array[i]);
		str[i] = (char*)malloc(array[i]*array[i]* sizeof(char));
		scanf("%s", str[i]);
	}
	for (int i = 0; i < n; i++){
		path(i+1,array[i], str[i]);
	}
	system("pause");
	return 0;
}