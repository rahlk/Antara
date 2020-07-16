#include<stdio.h>
#include<string.h>
#include<math.h>


int ehPrimo(int N)
{
    int eh=1;
    int i=2,limit;
    limit = sqrt(N);
    while (i<=limit && eh)
      if (N % i == 0)
         eh = 0;
      else
         i++;
    return eh;
}

void primos(int N, int *a, int *b)
{
    int limit;
    limit = sqrt(N);
    *a = 3;
    while (N % (*a))
        (*a)++;
    *b = N / *a;
}

typedef struct 
{
    int primo;
    int ord;
    char letter;
} TKey;

int compPrimo(void *a, void *b )
{
    TKey *pa = (TKey*)a;
    TKey *pb = (TKey*)b;
    return pa->primo - pb->primo;
}

int compOrd(void *a, void *b )
{
    TKey *pa = (TKey*)a;
    TKey *pb = (TKey*)b;
    return pa->ord - pb->ord;
}

int add(TKey *v, int *qtd, int primo)
{
    int i;
    int found=0;
    i=0;
    while (i<*qtd && !found)
       if (v[i].primo==primo)
          found = 1;
       else
          i++;
    if (!found)
    {
        i = *qtd;
        v[*qtd].ord = *qtd;
        v[*qtd].primo = primo;
        (*qtd)++;
    }
    return v[i].ord;
}

int main()
{
    TKey vet[30];
    char Text[110];
    int qtd,len; 
    int tests,testcase;
    int i,N,L,primoa,primob, num;
    
    scanf("%i",&tests);
    for (testcase=1; testcase<=tests;testcase++)
    {
        qtd = 0;
        scanf("%i %i",&N, &L);
        scanf("%i",&num);
        primos(num, &primoa, &primob);
        Text[0] = add(vet, &qtd, primoa);
        Text[1] = add(vet, &qtd, primob);
        len = 2;
        for(i=1;i<L;i++)
        {
           scanf("%i",&num);
           primoa = primob;
           primob = num / primoa;
           //printf("%i %i -> %i",num, primoa, primob);
           Text[i+1] = add(vet,&qtd,primob);
           len++;
        }
        
        qsort(vet, qtd, sizeof(TKey), compPrimo);
        for(i=0;i<qtd;i++)
           vet[i].letter='A'+i;
        qsort(vet, qtd, sizeof(TKey), compOrd);
        printf("Case #%i: ",testcase);
        fflush(stdout);
        for(i=0;i<len;i++)
           printf("%c", vet[Text[i]].letter);
        printf("\n");
        fflush(stdout);
    }
    return 0;
}