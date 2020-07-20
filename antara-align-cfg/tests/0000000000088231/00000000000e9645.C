#include<stdio.h>
#include<stdlib.h>

int main()
 {
   	int A, B, N, T;
	char counta = '1';
	char strn[10] = "";
	char stra[10] = "";
	char strb[10] = "";
        scanf("%d", &T);
	for(int i = 1; i <= T; i++)
        
	{
         scanf("%d", &N);
       	sprintf(strn, "%d", N);

	for(int i = 0; i < 9; i++)
	   stra[i] = (strn[i] != '4') ? strn[i] : counta;
                 
	A = atoi(stra);
	B = N - A;
	printf(" Case #%d : %d  %d\n", i, A, B);
	 }
  }


