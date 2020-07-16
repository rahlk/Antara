#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int bisect(int N)
{
    int p   =   N;
    if(p==0) return 0;
    else if(p%10 == 4) return ((bisect(p/10))*10) + 2;
    else return ((bisect(p/10))*10) + (p%10);
}
int main()
{
    int T,*N,i,*A,*B;
    scanf("%d",&T);
    N   =   (int *)malloc(T*sizeof(int));
    A   =   (int *)malloc(T*sizeof(int));
    B   =   (int *)malloc(T*sizeof(int));
    for(i=0;i<T;i++) scanf("%d",N+i);
    for(i=0;i<T;i++)
    {
        A[i]   =   bisect(N[i]);
        B[i]   =   N[i]-A[i];
    }
    for(i=0;i<T;i++) printf("\nCase #%d: %d %d",i+1,A[i],B[i]);
    return 0;
}