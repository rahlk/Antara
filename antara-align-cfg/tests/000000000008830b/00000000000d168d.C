#include <stdio.h>
#include <math.h>

unsigned long long factorPrime(unsigned long long);
void sort(unsigned long long x[], int len);
void removeDuplicates(unsigned long long x[], unsigned long long d[], int len);
unsigned char decipher(unsigned long long idx[], unsigned long long num, int len);


int main(void) {
    unsigned char T = 0;
    unsigned long long N = 0;
    unsigned char L = 0;
    /* read T */
    scanf("%u", &T);
    for (unsigned char i = 0; i<T; i++) {
        /* read threshold N and length of list of numbers L */
        scanf("%llu %u", &N, &L);
        /* the given cipher numbers */
        unsigned long long cipher[L];
        /* the factorization of the cipher numbers */
        unsigned long long plainText[L+1];
        /* the map between the prime factors to the alphabet */
        unsigned long long alphaIdx[26];
        /* read all cipher numbers */
        for (unsigned char j=0; j<L; j++) {
            scanf("%llu", &cipher[j]);
        }
        /* calculate the prime factor of the last cipher number */
        unsigned long long lastFactor = factorPrime(cipher[L-1]);
        // printf("factors of %llu are %llu and %llu\n", cipher[L-1], lastFactor, cipher[L-1] / lastFactor);
        /* reserve a variable for the other factor of the same number */
        // unsigned long long factor = 0;
        /* check if the next-to-last cipher number has the same factor as the lastFactor */
        if (cipher[L-2] % lastFactor == 0) {
            /* if this was true, then lastFactor is not the last number in the deciphered text
                thus, store the other factor in the last slot in the plainText */
            plainText[L] = cipher[L-1] / lastFactor;
            /* now store the factor shared between the last and next-to-last cipher numbers */
            // factor = lastFactor;
        } else {
            plainText[L] = lastFactor;
            // factor = cipher[L-1] / lastFactor;
        }
        // printf("deciphering all numbers\n");
        // printf("%u: %llu\n", 31, plainText[L]);
        /* decipher all cipher numbers */
        for (char j=L-1; j>-1; j--) {
            plainText[j] = cipher[j] / plainText[j+1];
            // printf("%u: %llu\n", j, plainText[j]);
            // factor = plainText[j];
        }
        
        // printf("\nprinting ciphered text\n");
        /* print cipher text */
        // for (int i=0; i<L; i++) printf("%llu ", cipher[i]);
        // printf("\n");
        /* print plain text */
        // printf("\nprinting plain text\n");
        // for (int i=0; i<L+1; i++) printf("%llu ", plainText[i]);
        // printf("\n");
        // printf("\nprinting constructed cipher\n");
        // for (int i=0; i<L; i++) printf("%llu ", plainText[i]*plainText[i+1]);
        // printf("\n");
        /* initialize alphaidx */
        for (int i =0; i<26; i++) alphaIdx[i] = 0;
        /* remove duplicates in plain text and store them in alphaIdx */
        removeDuplicates(plainText, alphaIdx, L+1);

        // printf("\nRemoved Duplicated: ");
        // for (int i =0; i<26; i++) printf("%llu ", alphaIdx[i]);
        
        sort(alphaIdx, 26);
        // printf("\nSorted Duplicated: ");
        // for (int i =0; i<26; i++) printf("%llu ", alphaIdx[i]);

        // printf("\n");
        for (int i=0; i<L+1; i++) {
            printf("%c", decipher(alphaIdx, plainText[i], L+1));
        }

    }
    return 0;
}

unsigned long long factorPrime(unsigned long long x) {
    unsigned long long prime = (unsigned long long) sqrtl(x);
    for (unsigned long long i = 2; i <= prime; i++) {
        if (x % i == 0)
            return i;
    }
    return 0;
}

void sort(unsigned long long x[], int len) {
    unsigned long long temp = 0;
    for (int i=0; i<len; i++)    {
        for (int j=0; j<len-i; j++)   {
            /* push large numbers to the end */
            if (x[j] > x[j+1])  {
                /* swap */
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }    
}

void removeDuplicates(unsigned long long x[], unsigned long long d[], int len) {
    int lastidx = 0;
    unsigned char found;
    for (int i=0; i<len; i++) {
        found = 0;
        for (int j=0; j<26; j++) {
            if (x[i] == d[j]) {
                found = 1;
                break;
            } 
        }
        if (found == 0)
            d[lastidx++] = x[i];
    }
}

unsigned char decipher(unsigned long long idx[], unsigned long long num, int len) {
    for (int i=0; i<len; i++) {
        if (idx[i] == num) return 65+i;
    }
    return len;
}