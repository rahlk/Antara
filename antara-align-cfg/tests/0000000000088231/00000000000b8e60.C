#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *T, t, i, j ,*A, *B;
    scanf("%d",&t);
    T= (int *)malloc(t*sizeof(int));
    A= (int *)malloc(t*sizeof(int));
    B= (int *)malloc(t*sizeof(int));
    for(i=0; i<t; i++)
    {
        scanf("%d", &T[i]);
    }
    for(i=0; i<t; i++)
    {
        A[i]= (T[i]/4);
        B[i]= T[i]-A[i];
    }
    for(j=1; j<=t; j++)
    {
        printf("Case #%d: %d %d", j, A[j-1], B[j-1]);
    }
}