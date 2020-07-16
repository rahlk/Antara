#include<stdio.h>
#include<stdlib.h>
int main()
 {
   	long A, B, N;
	int T;
        char strn[11] = "";
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

	for(int j = 0; j < 9; j++)
	  stra[j]  = (strn[j] != '4') ? strn[j] : '1';
                 
	A = strtol(stra, &pstra, 10);
	B = N - A;
	printf(" Case #%d : %ld  %ld\n", i, A, B);
	 }
  }


