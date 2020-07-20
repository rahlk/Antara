#include <stdio.h>
#include <stdlib.h>

int main(){

int n_of_TestCases,testlp,N,L;

scanf("%d",&n_of_TestCases);
scanf("%d\t%d",&N,&L);

for(testlp=0;testlp<=n_of_TestCases;testlp)
{


//Filling the L_strArr
int lp1;
int L_strArr[L];

for(lp1=0;lp1<=L;lp1++)
  scanf("%d",&L_strArr[lp1]);



//Getting all factors till N and creating pr_Arr[]
int pr_Arr[];
int pr_Arr_ind,i,j;

for(pr_Arr_ind=0,i=2 ; i<=N ; i++)
  {
    for(j=0 ; i==(j*j) ; j++)
      {
        if(i%j == 0)
          goto notPrimeSoNext;

        else
          j++;
      }
      pr_Arr[pr_Arr_ind] = i;
      notPrimeSoNext:
  }



//Factorizing L_strArr[0] and getting the first two ciph_factArr[] elements
int ciph_factArr[L+1];
int ind_a,ind_b;

for(ind_a;;ind_a++)
  {
    for(ind_b;;)
    {
      if(pr_Arr[ind_a]*pr_Arr[ind_b] == L_strArr[0])
        {
          ciph_factArr[0] = pr_Arr[ind_b];
          ciph_factArr[1] = pr_Arr[ind_b];
          goto ciphFactArrDone;
        }
      else
          ind_b++;
    }
  }

ciphFactArrDone:




//Filling up the rest of the ciph_factArr

float f_result;
int i_result;
int L_strArr_ind;

f_result = L_strArr[1]/ciph_factArr[0];
i_result = L_strArr[1]/ciph_factArr[0];

if(f_result - i_result != 0)
  ciph_factArr[2] = L_strArr[2]/ciph_factArr[1];

else
  ciph_factArr[2] = L_strArr[2]/ciph_factArr[0];

for(L_strArr_ind = 2 ; L_strArr_ind <= L ; L_strArr_ind++)
  ciph_factArr[L_strArr_ind + 1] = L_strArr[L_strArr_ind]/ciph_factArr[L_strArr_ind];




// Filling up the ciph_fact_ASCII_Arr
int ciph_factArr_ind , ciph_fact_ASCII_Arr_ind;
char ciph_fact_ASCII_Arr[L+1];

for(ciph_factArr_ind=0 , ciph_fact_ASCII_Arr_ind=0 ; ciph_factArr_ind<=L ; ciph_factArr_ind++)
  {
    for(pr_Arr_ind=0 ; ciph_factArr[ciph_factArr_ind]!=pr_Arr[pr_Arr_ind] ; pr_Arr_ind++ )
        ciph_fact_ASCII_Arr[ciph_fact_ASCII_Arr_ind] = pr_Arr[pr_Arr_ind] + 65;

  }


// Printing out the cipher
int lp_last;

printf("Case %d: ",testlp);

for(lp_last=0 ; ciph_fact_ASCII_Arr[lp_last]!='\0';lp_last++)
    printf("%c",ciph_fact_ASCII_Arr[lp_last]);

}





return 0;
}
