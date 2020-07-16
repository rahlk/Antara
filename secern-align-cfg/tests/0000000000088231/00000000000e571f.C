#include<stdio.h>
int check(int x)
{
    while (x!=0)
    {
        int y=x%10;
        if (y == 4)
            return 1;
        x/=10;
    }
    return 0;
}
int main()
{
    int i,j,T;
    scanf ("%d",&T);
    int N[T];
    for (i=0;i<T;i++)
        scanf ("%d",&N[i]);
    for (i=0;i<T;i++)
    {
        for (j=1;j<N[i];j++)
        {
            if ((j + N[i]-j == N[i]) && (check(j) != 1 && check(N[i]-j) != 1))
                break;
        }
        printf ("Case #%d: %d %d\n",i+1,j,N[i]-j);
    }
    return 0;
}
