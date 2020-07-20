#include<stdio.h>

int main()
{
char a[20];
char a1[20];
char a2[20];
int i=0, count=0, j, T, k=0;

scanf("%d", &T);
for (j=0; j<T; j++) {
	scanf("%s", &a);
	count=0; i=0;
	while (a[i]!='\0') {
		if (a[i]!='4') {
			a1[i]=a[i];
			a2[i]='0';
		}
		else if (a[i]=='4') {
			a1[i]='2';
			a2[i]='2';
		}
		i++;
	}
	printf("%s ", a1);
	
	printf("%s\n", a2);
}
}