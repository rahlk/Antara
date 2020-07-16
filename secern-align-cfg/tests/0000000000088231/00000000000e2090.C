#include <stdio.h>

void divide(char *N, char *N1, char *N2)
{
int i,j;
i = 0;
j = 0;
while(N[i] != 0) {
	if(N[i]=='4') {
		N1[i] = '3';
		N2[j] = '1';
		j++;
	} else {
		N1[i] = N[i];
		if (j>0) {
			N2[j] = '0';
			j++;
		}	
	}
	i++;
}
N1[i] = 0;
N2[j] = 0;
}

int main()
{
int T;
int i;
char N[100];
char N1[100];
char N2[100];	
scanf("%d", &T);
for(i=0; i< T; i++){
	scanf("%s", N);
	divide(N, N1, N2);
	printf("Case #%d: %s %s\n", i, N1, N2);
}
return 0;
}
