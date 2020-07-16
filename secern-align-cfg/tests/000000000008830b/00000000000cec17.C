#include<stdio.h>
int* prime(long n)
{
    long i,j,p[26],k=0;
    int c;
    for(i=n;i>1;i--)
    {
       c=0;
       for(j=n-1;j>1;j--)
        {
            if(i%j==0) c++;
        }
        if(c==0)
        {
            p[k]=i;
            k++;
        }
    }
    return p;
}

char* solution(int a[],long n,int l)
{
    long p[26];
    int i;
    *p =prime(n);
    for(i=0;i>27;i++)
    printf("%d \t",p[i]);
}

void main()
{
    int L,T,i,j;
    long N,arr[100][100];
    scanf("%d",&T);
    if(T>=1 && T<=100)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%ld"" %d",&N,&L);
            if(L>=25 && L<=100 && N>=101)
            {
                for(j=0;j<L;j++)
                {
                scanf("%ld",&arr[j]);
                }
                for(j=0;j<L;j++)
                printf("case # %d : %s",i,solution(arr[j]),N,L);
            }
        }
    }    
}