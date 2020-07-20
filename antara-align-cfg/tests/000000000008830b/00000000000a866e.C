#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(x, y) (x < y ? x : y)

bool findPrimes(uint64_t prod1,uint64_t prod2, uint64_t* f1, uint64_t* f2, uint64_t* f3)
{
    uint64_t min = MIN(prod1,prod2) ;

	uint64_t limit = (uint64_t)( sqrtl( min ) ); // Eratosthenes

	uint64_t n = 2;

	if( min%n == 0 )
    { //search all even numbers except 5

        if(min == prod1)
        {
            if(prod2%n == 0) // divisible by n
            {
                *f2 = n;     // in the middle of both products
                *f1 = prod1/n;
                *f3 = prod2/n;
            }else
            {
                *f1 = n;        // 'n' is just for product1
                *f2 = prod1/n;  //
                *f3 = prod2/(*f2);
            }
        }else // min == prod2
        {
            if(prod1%n==0) // divisible by n
            {
                *f2 = n;
                *f1 = prod1/n;
                *f3 = prod2/n;
            }else
            {
                *f3 = n;
                *f2 = prod2 / n ;
                *f1 = prod1 / (*f2) ;
            }
        }

        return true;
    }

	for(n = 3; n <= limit ; n+=2){
		if( min%n == 0 && (n%5 || n==5) ) { //search all even numbers except 5

			if(min == prod1)
            {
                if(prod2%n == 0) // divisible by n
                {
                    *f2 = n;     // in the middle of both products
                    *f1 = prod1/n;
                    *f3 = prod2/n;
                }else
                {
                    *f1 = n;        // 'n' is just for product1
                    *f2 = prod1/n;  //
                    *f3 = prod2/(*f2);
                }
			}else // min == prod2
			{
                if(prod1%n==0) // divisible by n
                {
                    *f2 = n;
                    *f1 = prod1/n;
                    *f3 = prod2/n;
                }else
                {
                    *f3 = n;
                    *f2 = prod2 / n ;
                    *f1 = prod1 / (*f2) ;
                }
			}

			return true;
		}

	}
	return false;

}


int indexMinProduct(uint64_t* array, int size){

    uint64_t minimum = array[0];
    int position=0;


    for (int index = 1; index < size; index++)
    {
        if (array[index] < minimum)
        {
           minimum = array[index];
           position = index;
        }
    }
    return position;
}

uint64_t cmpfunc (const void * a, const void * b) {
   return ( *(uint64_t*)a - *(uint64_t*)b );
}


uint64_t products[120] = {0};
uint64_t number[120] = {0};
uint64_t number_list[120] = {0};
char letters[26] = {0};

int main(int argc, char* argv[])
{
	int t;
	int case_test = 0;

	int n, len;
	

	fscanf(stdin,"%d",&t);

	while(case_test < t){

		fscanf(stdin,"%d %d",&n,&len);

        for(int num = 0; num< len ; num++)
        {
            fscanf(stdin,"%lld",&products[num]);
        }

        // Finds the easiest prime to factorize by searching the smallest number
        int p = indexMinProduct(products,len);

        // adjusts if the minimum is located at the end of the array
        if(p==len-1)
        {
            findPrimes(products[len-2],products[len-1],&number[len-2],&number[len-1],&number[len]);
            // Backwards filling
            for(int i=len-3;i>=0;i--)
            {
                number[i] = products[i]/number[i+1];
            }
        }else
        {
            findPrimes(products[p],products[p+1],&number[p],&number[p+1],&number[p+2]);

            // Backwards filling
            for(int i=p-1;i>=0;i--)
            {
                number[i] = products[i]/number[i+1];
            }

            // Forward filling
            for(int i=p+2;i<len+1;i++)
            {
                number[i+1] = products[i]/number[i];
            }

        }

        // Copies data to number_list, where repeated data will be removed
        memcpy(number_list,number,sizeof(number[0])*(len+1) );

        // Sorts the sequence of numbers used to write the message
        qsort(number_list, len+1, sizeof(number[0]), cmpfunc);

        int size = len+1;

        // Remove repeated elements from the list
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size;)
            {
                if (number_list[j] == number_list[i])
                {
                    for (int k = j; k < size; k++)
                    {
                        number_list[k] = number_list[k + 1];
                    }
                    size--;
                }
                else
                {
                    j++;
                }
            }
        }


        fprintf(stdout,"Case #%d: ",++case_test);

        // Combinational search for finding the characters in the sequence of numbers
        for(int n =0 ; n < len+1; n++){
            for(int c = 'A'; c<='Z'; c++ ){
                if(number[n]== number_list[c-'A']){
                    fprintf(stdout,"%c",c);
                }
            }

        }
        fprintf(stdout,"\n");

	}


	return 0;
}
