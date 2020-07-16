#include<stdio.h>

char N[500];
char A[500];
char B[500];

int main(){
	int T;
	scanf("%d",&T);
	int i;
	for (i=0;i<T;i++){
		scanf("%s",N);
		int j=0;
		if (N[0]=='4'){
			A[0] = '3';
			B[0] = '1';
		}
		else{
			A[0] = N[0];
			B[0] = '0';
		}
		j++;
		while(N[j]!='\0'){
			if (N[j]=='4'){
				A[j] = '3';
				B[j] = '1';
			}
			else{
				A[j] = N[j];
				B[j] = '0';
			}
			j++;
		}
		A[j] = '\0';
		B[j] = '\0';
		int Bstart = 0;
		while(B[Bstart]=='0'){
			Bstart++;
		}
		printf("Case #%d: %s %s\n",T,A,B+Bstart);
		
	}
	return 0;
	
}