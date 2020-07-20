#include<stdio.h>
#include<stdlib.h>
int main()
 {
   	long A, B, N;
	int T;
	char strn[10] = "";
	char stra[10] = "";
	scanf("%d", &T);
	for(int i = 1; i <= T; i++)
        
	{
         scanf("%ld", &N);
       	sprintf(strn, "%ld", N);

	for(int i = 0; i < 9; i++)
	   stra[i] = (strn[i] != '4') ? strn[i] : '1';
                 
	A = atoi(stra);
	B = N - A;
	printf(" Case #%d : %ld  %ld\n", i, A, B);
	 }
  }


