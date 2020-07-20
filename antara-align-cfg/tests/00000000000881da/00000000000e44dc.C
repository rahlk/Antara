# include <stdio.h>
int main()
{
    int t, n, j, i;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("\n%d",&n);
        char p[(2*n-2)], q[(2*n-2)];
        scanf("\n%s",p);
        for(j=0; p[j]!='\0'; j++)
        {
            if(p[j]=='S')
                q[j]='E';
            else
                q[j]='S';
        }
        printf("\n%s",q);
    }
    return 0;
}
        