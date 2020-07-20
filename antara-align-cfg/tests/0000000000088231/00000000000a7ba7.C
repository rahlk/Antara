#include<stdio.h>
long int pow(int a,int b)
{
    int p=1;
    if(b==0)
        return 1;
    else{
        while(b)
        {
            p=p*a;
            b--;
        }
        return p;
    }
}
int nSize(long int n)
{
    int c=0;
    while(n)
    {
        n/=10;
        c++;
    }
    return c;
}
long int Exists_4(long int A,long int B)
{
    while(A)
    {
        if(A%10==4)
            return 1;
        A/=10;
    }
    while(B)
    {
        if(B%10==4)
            return 1;
        B/=10;
    }
    return 0;
}
int main(void)
{
    long int T,N,A,B,i,j,k;
    scanf("%ld",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%ld",&N);
        /*if(N%2==0)
        {
            A=B=N/2;
        }
        else
        {
            A=(N-1)/2;
            B=A+1;
        }*/
            B=N-pow(10,nSize(N)-1);
            A=N-B;
            while((Exists_4(A,B))&&A>0&&B>0)
            {
                A--;
                B++;
            }
            printf("%ld %ld",A,B);
        
    }
    return 0;
}