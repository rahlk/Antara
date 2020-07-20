#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int verify(int value);
int main()
{
    int a,b,i=0,N,value,r=1;
    scanf("%d",&N);
    time_t t;
    srand((unsigned) time(&t));
    while(i<N)
    {
        scanf("%d",&value);
        while(r!=0)//tenta achar um numero que nao tem digito 4,se nao achar continua buscando
         {
             a=rand() % value;
             if(a!=0)
                r=verify(a);//gera um valor aleatorio
             if(r==0)
             {
                 b=value-a;
                 r=verify(b);
             }
         }
         r=1;
        printf("Case #%d:%d %d",i+1,a,b);
        i++;
    }
}
int verify(int c)
{
    int r;
    while(c>0)
     {
        r=c%10;
        if(r==4)
         return(1);//encontrou um caracter 4
        c/=10;
     }
    return(0);//nao tem caracter 4 no numero
}
