#include <stdio.h>

int jamcoins(int N)
{
    int jamcoinsA=0;
    int pos = 0;
    int newN = N;
    while (newN > 0) 
    {
        int digit = newN % 10;
        if(digit==4){jamcoinsA+=pow(10,pos);}
        pos = pos + 1;
        newN = newN / 10;
    } 
    return jamcoinsA;
}
int main(int argc, char *argv[])
{
    int N,T,B,A,x;
    scanf("%d",&T);
    for(x=1;x<=T;x = x + 1)
    {
        scanf("%d",&N);
        A=jamcoins(N);
        B=N-A;
        printf("Case #%d: %d %d\n",x,A,B);
    }
    
    return 0;
}