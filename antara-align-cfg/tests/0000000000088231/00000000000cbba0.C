#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAX 110

typedef struct 
{
    unsigned short int digits[MAX];
    int qtd;
} TBigNumber;


void read(TBigNumber *n)
{
    char aux[MAX];
    int i,k,len = 0;
    scanf("%s", aux);
    len = strlen(aux);
    k=len-1;
    n->qtd = len;
    for(i=0,k=len-1;i<MAX;i++,k--)    
       n->digits[i] = k>=0?aux[k]-'0':0;
}

void print(TBigNumber *n)
{
    int pos;
    for(pos=n->qtd-1;pos>=0;pos--)
       printf("%i",n->digits[pos]);
}


void divideNumber(TBigNumber *n, TBigNumber *a, TBigNumber *b)
{
   int ok,pos,aux,a1,b1;
   pos=0;
   for(pos=0;pos<n->qtd;pos++)
   {
       aux = n->digits[pos];
       a1 = aux / 2;
       b1 = aux - a1;
       if (a1 == 4 || b1 == 4)
       {
           a1--;
           b1 = aux - a1; 
       }
       a->digits[pos]=a1;
       b->digits[pos]=b1;
   }
   a->qtd = b->qtd = n->qtd;
   //while (a->qtd>0 && a->digits[a->qtd-1]==0)
   //   a->qtd--;    
   //while (b->qtd>0 && b->digits[b->qtd-1]==0)
     // b->qtd--;    
}


int main(void)
{
    int tests,testcase;
    TBigNumber n,a,b;
    scanf("%i",&tests);
    for (testcase=1; testcase<=tests;testcase++)
    {
        read(&n);
        divideNumber(&n, &a, &b);   
        printf("Case #%i ",testcase);
        print(&a);
        printf(" ");
        print(&b);
        printf("\n");
        fflush(stdout);
    }
}
