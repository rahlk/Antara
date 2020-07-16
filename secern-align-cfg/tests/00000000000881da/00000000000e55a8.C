# include <stdio.h>
int main()
{
    int t, n, j, i, k;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("\n%d",&n);
        char p[(2*n-2)], q[(2*n-2)];
        scanf("\n%s",p);
        k=strlen(p);
        for(j=0,k-=1; p[j]!='\0'; j++,k--)
        {
            q[j]=p[k];
        }
        printf("\n%s",q);
    }
    return 0;
}
        