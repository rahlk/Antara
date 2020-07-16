#include<stdio.h>
#include<stdlib.h>

int main()
 {
   	long A, B, N;
   	int T;
	char counta = '1';
	int countb = 0;
	char strn[10] = "";
	char stra[10] = "";
	char strb[10] = "";
        scanf("%d", &T);
	for(int i = 1; i <= T; i++)
        
	{
         scanf("%ld", &N);
       	sprintf(strn, "%ld", N);
	do
	 {
		for(int i = 0; i < 9; i++)
		 {
		  stra[i] = (strn[i] != '4') ? strn[i] : counta;
                 }
		A = atoi(stra);
		B = N - A;
		sprintf(strb, "%ld", B);
		
		for(int i = 0; i < 9; i++)
		 {
		    if(strb[i] == '4')
			{
			  countb++;
			  counta++;
			  break;
			}
                 }
		   
               }
	   while(((counta != '4')) && (countb != 0));
           if(countb == 0)
             {
		printf(" Case #%d : %ld  %ld\n", i, A, B);
	     }
             }
}
