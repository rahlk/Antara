#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef unsigned char bool;

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int gcd(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    
    return a;
}

char letters[12000];

int main()
{
    int T, cont = 0;    
    scanf("%d\n", &T);
    
    while(T--)
    {
        int n, l, vet[110], seq[110], seq_ord[110];
        int i, k;
        
        scanf("%d %d\n", &n, &l);
        
        for(i = 0; i < l; i++)
            scanf("%d\n", &vet[i]);
        
        for(i = 1; i < l; i++)
            seq[i] = gcd(vet[i-1], vet[i]);
        seq[0] = vet[0]/seq[1];
        seq[l] = vet[l-1]/seq[l-1];
        
        for(i = 0; i <= l; i++)
            seq_ord[i] = seq[i];
        
        qsort(seq_ord, l+1, sizeof(int), cmpfunc);
        
        letters[seq_ord[0]] = 'A';
        for(i = 1, k = 1; i <= l; i++)
            if(seq_ord[i] != seq_ord[i-1])
                letters[seq_ord[i]] = 'A' + k++;
            
        printf("Case #%d: ", ++cont);
        for(i = 0; i <= l; i++)
            printf("%c", letters[seq[i]]);
        printf("\n");
    }
    
    return 0;
}
