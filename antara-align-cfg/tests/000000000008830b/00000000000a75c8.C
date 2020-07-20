#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define DEBUG_P 1

unsigned int find_primes(unsigned int **dparr, unsigned int pnum)
{
    unsigned int *parr = *dparr;
    unsigned int num_p = 1;

#ifdef DEBUG_P
    printf("Addr_In_Func: %p\n", parr);
    printf("\nPrimes: 2 ");
#endif
    
    //Only Even Prime
    parr[num_p-1] = 2;
    
	//Start Prime Search from 3
	unsigned int unt_p = 3;
    while(unt_p<=pnum)
    {
        unsigned int i;
        unsigned int p_num = 1;
        for(i=2; i<=(unt_p/2); i++)
        {
            if(unt_p%i==0)
            {
                //Clear Flag if Divisible
                p_num = 0;
            }
        }
        
        //Prime if Flag is Set
        if(p_num)
        {
            //Create Space and Enter Prime
            num_p++;
            parr = (unsigned int*)realloc(parr, sizeof(unsigned int)*num_p);
            parr[num_p-1] = unt_p;
            
#ifdef DEBUG_P
            printf("%u ", parr[num_p-1]);
#endif
        }
        unt_p++;
    }

#ifdef DEBUG_P
    printf("\n");
#endif
    
    //Re-Assign Pointer
    *dparr = parr;
    
#ifdef DEBUG_P
    printf("Addr_Before_Func_Exit: %p\n", parr);
#endif
    
    return num_p;
}

void find_a(unsigned int *pr_arr, unsigned int *ctxt, unsigned int nump, unsigned int numa, unsigned int case_n)
{
    unsigned int i, j, k;
    unsigned int found_prime;
    
    unsigned int first_let[2] = {0, 0};
    unsigned int temp_ind = 0;
    
    unsigned int *bitm = (unsigned int*)malloc(sizeof(unsigned int)*26);
    
    for(i=0; i<26; i++)
    {
        bitm[i] = 0;
    }
    
    i = 0;
    unsigned int aind = 0;
    for(k=0; k<26; k++)
    {
        for(i=aind; i<nump; i++)
        {
            found_prime = 0;
            for(j=0; j<numa; j++)
            {
                if(ctxt[j]%pr_arr[i]==0)
                {
                    found_prime = 1;
#ifdef DEBUG_P
                    printf("%c Prime: %u, APos: %u\n", (char)('A'+k), pr_arr[i], j+1);
#endif
                    bitm[k] = i;
                    if(j==0)
                    {
                        first_let[temp_ind] = k;
                        temp_ind++;
                    }
                    break;
                }
            }
            if(found_prime==1)
            {
                break;
            }
        }
        aind = i+1;
    }
    
#ifdef DEBUG_P
    printf("IND %c %c\n", (char)(first_let[0]+'A'), (char)(first_let[1]+'A'));
#endif
    
    unsigned int which_sec = first_let[0];
    unsigned int which_first = first_let[1];
    
    if(ctxt[1]%pr_arr[bitm[first_let[1]]]==0)
    {
        which_sec = first_let[1];
        which_first = first_let[0];
    }
    
#ifdef DEBUG_P
    printf("\nFIRST %c\n", (char)(which_first+'A'));
#endif
    
    unsigned int rem_val;
    printf("Case #%u: %c", case_n, (char)(which_first+'A'));
    for(i=0; i<numa; i++)
    {
        rem_val = ctxt[i]/pr_arr[bitm[which_first]];
        for(j=0; j<26; j++)
        {
            if(rem_val==pr_arr[bitm[j]])
            {
                printf("%c", 'A'+j);
                which_first = j;
                break;
            }
        }
    }
    
    printf("\n");
    free(bitm);
}

int main()
{
    //Get Number of Sentences
	unsigned int n;
	scanf("%u", &n);
    
#ifdef DEBUG_P
    printf("Number of Crypt Texts: %u\n", n);
#endif
    
    unsigned int i;
    unsigned int pr_range, num_char;
    unsigned int *ctxt_arr;
    unsigned int *prime_arr;
    unsigned int numprime;
    
    for(i=0; i<n; i++)
    {
        //Get Prime Number Range and Number of Characters - 1
        scanf("%u %u", &pr_range, &num_char);
        
#ifdef DEBUG_P
        printf("Entry: %u, N: %u, L: %u\n", i, pr_range, num_char);
        printf("Recvd Text: ");
#endif
        
        //Get Text
        //printf("\n");
        unsigned int j;
        ctxt_arr = (unsigned int*)malloc(sizeof(unsigned int)*num_char);
        for(j=0; j<num_char; j++)
        {
            scanf("%u", ctxt_arr+j);
#ifdef DEBUG_P
            printf("%u ", ctxt_arr[j]);
#endif
        }
        
#ifdef DEBUG_P
        printf("\n");
#endif
        
        //Find Primes in Range
        prime_arr = (unsigned int*)malloc(sizeof(unsigned int));
#ifdef DEBUG_P
        printf("Addr_Before_Func_Prime: %p\n", prime_arr);
#endif
        numprime = find_primes(&prime_arr, pr_range);

#ifdef DEBUG_P
        printf("Number of Primes %u\n", numprime);
        printf("Addr_After_Func: %p\n", prime_arr);
#endif
        
        find_a(prime_arr, ctxt_arr, numprime, num_char, i+1);
#ifdef DEBUG_P
        printf("Free\n");
#endif
        free(prime_arr);
        free(ctxt_arr);
#ifdef DEBUG_P
        printf("Done Free\n");
#endif
    }
    
    return 0;
}