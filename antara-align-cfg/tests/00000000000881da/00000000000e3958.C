#include<stdio.h>
int main()
{
    int i,j,T;
    scanf ("%d",&T);
    int N[T];
    char P[T][100],Q[T][100];
    for (i=0;i<T;i++)
    {
        scanf("%d",&N[i]);
        scanf("%s",P[i]);
        for (j=0;j<2*N[i]-2;j++)
        {
            if (P[i][j] == 'S')
                Q[i][j]='E';
            else
                Q[i][j]='S';
        }
    }
    for (i=0;i<T;i++)
    {
        printf ("\nCase #%d: ",i+1);
        for (j=0;j<2*N[i]-2;j++)
            printf ("%c",Q[i][j]);
    }
    return 0;
}
