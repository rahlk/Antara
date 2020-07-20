
#include <stdio.h>
#include <math.h>


int main ()
{
  int T, L[100],D[101][10000],E[10000];
  int i, j, k, c;
  char C[101][101];
  unsigned long long N[100], num[100][100], temp, temp1, A[101][101],
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
      D[i][A[i][0]]=1;
      if(B[i][1]==B[i][0])
         B[i][1]=0;
      else
        D[i][A[i][1]]=1;
      for (j = 2; j < (L[i] + 1); j++)
	{
	  A[i][j] = num[i][j - 1] / A[i][j - 1];
	  if(D[i][A[i][j]]!=1){
	   D[i][A[i][j]]=1;
	   B[i][j] = A[i][j];   
	  }
	  else
	  B[i][j]=0;
	}
    
  
  for (j = 0; j < (L[i] + 1); j++){
    c=65;  
    for (k = 0; k < (L[i] + 1); k++)  {
       if(B[i][k]){    
        if(A[i][j]>A[i][k])
        c++;
       }
    }
    C[i][j]=(char)c;
  }

     for (j = 0; j < 100; j++){
	    if(C[i][j]<65 || C[i][j]>90)
	      C[i][j]='\0';
	}
    }
    for(i=1;i<=T;i++){
    printf("\nCase #%d",i);
    printf(": %s",C[i]);  
    }

  return 0;
}
