#include<stdio.h>
void main()
{
    int i,T;
    scanf ("%d",&T);
    int N[T];
    for (i=0;i<T;i++)
    {
        scanf ("%d",&N[i]);
        char P[i][2*N[i]-2];
        gets(P[i]);
        printf ("Case #%d: %s\n",i+1,P[i]);
    }
}