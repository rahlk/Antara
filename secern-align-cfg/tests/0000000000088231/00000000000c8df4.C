#include <stdio.h>
int main(){
    int T,N,i,temp;
    int A=0,B=0,digit=0,maxpow=10;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        maxpow = 1;
        do
        {
            maxpow = maxpow*10;
            temp = N/maxpow;
        }
        while(temp != 0);
        maxpow = maxpow/10;
        A=0;
        B=0;
        while(maxpow!=0)
        {
            digit = N/maxpow;
            N=N%maxpow;
            if(digit==4)
            {
                A=A*10+2;
                B=B*10+2;
            }
            else
            {
                A=A*10+digit;
                B=B*10;
            }
            maxpow = maxpow/10;
        }
        printf("Case #%d: %d %d\n",i,A,B);
    }
    return 0;
}