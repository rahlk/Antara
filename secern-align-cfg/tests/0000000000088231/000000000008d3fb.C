#include <stdio.h>
#include <string.h>

char n[100],a[100],b[100];

int ret_notzeroptr(char *c)
{
	int i;
	for(i=0; i<strlen(c); i++) {
		if(c[i] != '0')
			break;
	}
	return i;
}

int main_routine(int t)
{
	int i, ptr;
	int len = strlen(n);
	for(i=0; i<100; i++) {
		a[i] = '\0';
		b[i] = '\0';
	}
	for(i=0; i<len; i++) {
		if(n[i] == '4') {
			a[i] = '3';
			b[i] = '1';
		}
		else {
			a[i] = n[i];
			b[i] = '0';
		}
	}
	printf("Case #%d: %s %s\n", t, &(a[ret_notzeroptr(a)]), &(b[ret_notzeroptr(b)]));
}

int main()
{
	int i, T;
	
	scanf("%d", &T);
	for ( i=0;i<T;i++ ) {
		scanf("%s", n);
		main_routine(i+1);
	}
}

