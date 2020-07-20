#include<stdio.h>
#include<stdlib.h>
int main()
 {
   	long A, B, N;
	int T;
        char strn[10] = "";
        char stra[10] = "";
	char * pstrn;
	char * pstra;
	pstrn = strn;
	pstra = stra;
	scanf("%d", &T);
	for(int i = 1; i <= T; i++)
        
	{
         scanf("%ld", &N);
       	sprintf(pstrn, "%ld", N);

	for(int i = 0; i < 9; i++)
	   stra[i] = (strn[i] != '4') ? strn[i] : '1';
                 
	A = strtol(stra, &pstra, 10);
	B = N - A;
	printf(" Case #%d : %ld  %ld\n", i, A, B);
	 }
  }


