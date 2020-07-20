#include<stdio.h>
//#include<conio.h>

int main ()
{
    int N,  T;
    scanf("%d",&T);
    for( int i=0; i<T; i++)
    {
        scanf("%d",&N);
        int a=1;
        int A=0, B=0;
        int X=N;
        while(N!=0)
        {
            int n= N%10;
            if(n==4)
            {
                A=A+a;
                a= a * 10;
            }
            N=N/10;
        }
        B= X - A;
        printf("Case #%d: %d %d \n", i+1, A, B);
    }
    return 0;
}