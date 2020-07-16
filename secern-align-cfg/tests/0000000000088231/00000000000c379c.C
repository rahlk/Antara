#include <stdio.h>

int main() {
	int  T = 0;
	char N[100], A[100], B[100];
	for (int a = 0; a < 100; a++)
	{
		A[a] = NULL;
		B[a] = NULL;
	}
	scanf("%d", &T);
	for (int a = 1; a <= T; a++)
	{
		int check = 0,temp=0;
		getchar();
		scanf("%s", &N);
		
		for (int a = 0; a < 100; a++) {
			if (N[a] == '4')
			{
				A[a] = '2';
				if(check!=1)
					temp = a;
				B[a-temp] = '2';
				check = 1;
				
			}
			else
			{
				A[a] = N[a];
				if (check == 1 && N[a]!=NULL)
					B[a-temp] = '0';
			
			}

		}
		printf("Case #%d: %s %s\n", a,A,B);

		for (int a = 0; a < 100; a++)
		{
			A[a] = NULL;
			B[a] = NULL;
		}
	}
	return 0;
}