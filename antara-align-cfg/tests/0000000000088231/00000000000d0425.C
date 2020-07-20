#include<stdio.h>
int check(long long int);
long long int compute_two(long long int N,long long int *);
static long long int N;
int main()
{
    int T,i,f=0,j;
    long long int A,B;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lld",&N);
        f = check(N);
        if(f)
        A=compute_two(N/2,&B);
        printf("Case #%d:  %lld %lld\n",i+1,A,B);
            
        }
    
    return 0;
}

long long int compute_two(long long int A,long long int *B)
{
    if(!(check(A)) && !(check(N-A)))
    {
        *B = N-A;
    return A;
    }
    compute_two(A+1,B);
}

int check(long long int N)
{
    for(int j=N;j>0;j/=10)
        if(j%10 == 4)
            return 1;
    return 0;
}