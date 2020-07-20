#include <stdio.h>
#include <stdlib.h>

unsigned int findGCD(unsigned int a, unsigned int b)
{
    if(a==0 || b==0)
    {
        return 0;
    }
    else if(a==b)
    {
        return a;
    }
    else if(a>b)
    {
        return findGCD(a-b, b);
    }
    else
    {
        return findGCD(a, b-a);
    }
}

void inc_sort(unsigned int *arr, unsigned int len)
{
    unsigned int i;
    unsigned int j;
    unsigned int min, temp;
    for(i=0; i<len; i++)
    {
        min = i;
        for(j=i+1; j<len; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        
        //Swap
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void de_duplicate(unsigned int *arr, unsigned int len)
{
    unsigned int i;
    unsigned int j;
    unsigned int br_pt;
    
    for(i=0; i<(len-1); i++)
    {
        j=i+1;
        while(arr[i]==arr[j])
        {
            j++;
        }
        
        if(j==i+1)
        {
            continue;
        }
        br_pt = j;
        
        for(j=0; j<(len-br_pt); j++)
        {
            arr[i+1+j] = arr[br_pt+j];
        }
    }
}

void print_case(unsigned int *primeList, unsigned int *ctxt, unsigned int len, unsigned int fr_pr, unsigned int cnum)
{
    unsigned int i, j, k;
    unsigned int next_pr;
    
    printf("Case #%u: ", cnum);
    for(i=0; i<26; i++)
    {
        if(fr_pr == primeList[i])
        {
            printf("%c", (char)(i+'A'));
        }
    }
    
    next_pr = fr_pr;
    for(i=0; i<len; i++)
    {
        next_pr = ctxt[i]/next_pr;
        for(j=0; j<26; j++)
        {
            if(next_pr == primeList[j])
            {
                if(i==(len-1))
                {
                    printf("%c\n", (char)(j+'A'));
                }
                else
                {
                    printf("%c", (char)(j+'A'));
                }
            }
        }
    }
}

int main()
{
    unsigned int n, i, j, prime_lim, num_char, first_pr;
    unsigned int *ctxt;
    unsigned int *primeList;
    
    //Get Test Numbers
    scanf("%u", &n);
    
    for(i=0; i<n; i++)
    {
        //Get Prime Limit and Number of Characters
        scanf("%u %u", &prime_lim, &num_char);
        
        ctxt = (unsigned int*)malloc(sizeof(unsigned int)*num_char);
        primeList = (unsigned int*)malloc(sizeof(unsigned int)*(num_char+1));
        
        for(j=0; j<num_char; j++)
        {
            //Get CipherTxt
            scanf("%u", ctxt+j);
        }
        
        //Find Primes
        for(j=0; j<(num_char-1); j++)
        {
            primeList[j+1] = findGCD(ctxt[j], ctxt[j+1]);
        }
        
        primeList[0] = ctxt[0]/primeList[1];
        primeList[num_char] = ctxt[num_char-1]/primeList[num_char-1];
        first_pr = primeList[0];
        
        inc_sort(primeList, num_char+1);
        de_duplicate(primeList, num_char+1);
        print_case(primeList, ctxt, num_char, first_pr, i+1);
        
        free(ctxt);
        free(primeList);
    }
    
    return 0;
}