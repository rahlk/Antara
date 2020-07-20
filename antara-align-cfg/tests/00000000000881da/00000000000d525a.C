#include<stdio.h>
#include<string.h>

int main()
{
	char str[50], str2[50];
	int i, len, j, k, T;
	scanf("%d", &T);
	for (j=0; j<T; j++) {
	scanf("%s", &str);
	i=0; k=0;
	while (str[i]!='\0') {
		if (str[i]=='E') {
			str2[i]='S';
		}
		else if (str[i]=='S') {
			str2[i]='E';
		}
		i++;
	}
	str2[i]='\0';
	printf("Case #%d: ", j+1);
	printf("%s", str2);
	printf("\n");
	len=strlen(str2);
	for (k=0; k<=len; k++) {
		str2[k]='\0';
	}
	}
}