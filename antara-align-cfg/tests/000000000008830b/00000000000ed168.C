/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>


int main ()
{
  int T, L[101];
  int i, j, k, c;
  char C[101];
  unsigned long long N[101], num[101][101], temp, temp1, A[101][101],
    B[101][101];
  scanf ("%d", &T);

  for (i = 1; i <= T; i++)
    {
      scanf ("%llu", &N[i]);
      scanf ("%d", &L[i]);
      for (j = 0; j < L[i]; j++)
	{
	  scanf ("%llu", &num[i][j]);
	}
    }
  for (i = 1; i <= T; i++)
    {
//   Extraction of Prime Factor of 1st Number.    
      temp = sqrt (num[i][0]);
      temp1 = temp;
      while (1)
	{
	  if (!temp)
	    {
	      if (temp1 > N[i])
		break;
	    }
	  if (temp1 > N[i])
	    {
	      if (!temp)
		break;
	    }
	  if (num[i][0] % temp == 0)
	    {
	      if (num[i][1] % temp == 0)
		{
		  A[i][1] = temp;
		  A[i][0] = num[i][0] / temp;
		}
	      else
		{
		  A[i][0] = temp;
		  A[i][1] = num[i][0] / temp;
		}

	      break;
	    }
	  if (num[i][0] % temp1 == 0)
	    {
	      if (num[i][1] % temp1 == 0)
		{
		  A[i][1] = temp1;
		  A[i][0] = num[i][0] / temp1;
		}
	      else
		{
		  A[i][0] = temp1;
		  A[i][1] = num[i][0] / temp1;
		}
	      break;
	    }
	  temp--;
	  temp1++;
	}
//         printf("\n%llu  %llu",A[i][0],A[i][1]);
      // Extraction of Prime factors of other numbers
      B[i][0] = A[i][0];
      B[i][1] = A[i][1];
      for (j = 2; j < (L[i] + 1); j++)
	{
	  A[i][j] = num[i][j - 1] / A[i][j - 1];
	  B[i][j] = A[i][j];
//	  printf("\t%llu",A[i][j]);
	}

//     Bubble Sort             
      for (j = 0; j < (L[i] + 1); j++)
	{
	  for (k = 0; k < (L[i]); k++)
	    {
	      if (B[i][k] > B[i][k + 1])
		{
		  temp = B[i][k];
		  B[i][k] = B[i][k + 1];
		  B[i][k + 1] = temp;
		}
	    }
	}
//Assigning Alphabets
  c=65;
      for (j = 0; j < (L[i] + 1); j++)
	{
        if(B[i][j+1]!=B[i][j]){
            for (k = 0; k < (L[i] + 1); k++){
                if(A[i][k]==B[i][j]){
                    C[k]= (char)c;
                }
            }
            c++;
        }
         
	}
	for (j = 0; j < 100; j++){
	    if(C[j]<65 || C[j]>90)
	      C[j]='\0';
	}
    printf("\nCase #%d",i);
    printf(": %s",C);
	for (j = 0; j < 100; j++){
	      C[j]='\0';
	}    
    }

  return 0;
}
