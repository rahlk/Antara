#include <stdio.h>

int main(void){
	int T;
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		int A, B, N;
		scanf("%d", &N);
		A = N;
		B = 0;
		for(int j=1; N>0; N/=10, j*=10)
		{
			if(N%10 == 4)
			{
				A -= j;
				B += j;
			}
		}
		printf("Case #%d: %d %d", i+1, A, B);
	}
}