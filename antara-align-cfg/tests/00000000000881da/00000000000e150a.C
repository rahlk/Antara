#include<stdio.h>
int main()
{
    int i,j,T;
    scanf ("%d",&T);
    for (i=0;i<T;i++)
    {
        int N;
        scanf ("%d",&N);
        char P[2*N-2],Q[2*N-2];
        scanf("%s",P);
        for (j=0;j<2*N-2;j++)
        {
            if (P[j] == 'S')
                Q[j]='E';
            else
                Q[j]='S';
        }
        printf ("\nCase #%d: ",i+1);
        for (j=0;j<2*N-2;j++)
            printf ("%c",Q[j]);
    }
    return 0;
}
