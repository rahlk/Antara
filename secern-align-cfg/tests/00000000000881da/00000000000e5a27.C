# include <stdio.h>
int main()
{
    int t, n, j, i, k;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("\n%d",&n);
        char p[(2*n-2)];
        scanf("\n%s",p);
        printf("\nCase #%d: ",(i+1));
        for(j=0; p[j]!='\0'; j++)
        {
            if(p[j]=='S')
                printf("E");
            else
                printf("S");
        }
    }
    return 0;
}
        