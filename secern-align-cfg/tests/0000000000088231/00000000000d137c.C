#include<stdio.h>
#include<string.h>

int main()
{
char a[20];
char a1[20];
char a2[20];
int i=0, count=0, j, T, k=0, len;

scanf("%d", &T);
for (j=0; j<T; j++) {
	scanf("%s", &a);
	count=0; i=0; k=0;
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
	while (a2[k]=='0') { k++;}
	
	while (a2[k]!='\0') {
	    printf("%c", a2[k]);
	    k++;
	}
	printf("\n");
	len=strlen(a1);
	for (k=0; k<=len; k++) {
		a1[k]='\0';
	}
	len=strlen(a2);
	for (k=0; k<=len; k++) {
		a2[k]='\0';
	}
}
}