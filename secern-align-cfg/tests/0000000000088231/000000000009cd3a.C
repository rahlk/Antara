#include<stdio.h>
#include<stdlib.h>
int len(char *str){
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
void divide(char* str,int t){
	int l = len(str);
	char str1[100];
	int j = 0;
	for (int i = 0; i < l; i++){
		if (j != 0)
			str1[j++] = '0';
		if (str[i] == '4'){
			str[i] = str[i] - 1;
			if (j != 0)
				j--;
			str1[j++] = '1';
		}
	}
	str1[j] = '\0';
	printf("Case #%d: %s %s\n", t, str, str1);
	return;
}
int main(){
	int n;
	scanf("%d", &n);
	char** str = (char**)malloc(n*sizeof(char*));
	for (int i = 0; i < n; i++){
		str[i] = (char*)malloc(100 * sizeof(char));
		scanf("%s", str[i]);
	}
	for (int i = 0; i < n; i++){
		divide(str[i],i+1);
	}
	system("pause");
	return 0;
}