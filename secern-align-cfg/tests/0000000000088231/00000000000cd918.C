#include<stdio.h>
int main()
{
    long int N[100],A[100],B[100];
    int T;
    int i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
        scanf("%ld",&N[i]);
    for(i=0;i<T;i++)
    {
        A[i]=(N[i]/2)+(N[i]/4)+(N[i]/8)+(N[i]/16)+(N[i]/32)+(N[i]/64)+(N[i]/128)+(N[i]/256)+(N[i]/512)+(N[i]/1024);
        B[i]=N[i]-A[i];
        printf("Case #%d: %ld %ld",i+1,A,B);

    }

    return 0;
}