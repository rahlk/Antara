#include<stdio.h>
main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long int n,j;
        scanf("%ld",&n);
        char move[n];
        scanf("%s",move);
        printf("Case #%d: ",i+1);
        for(j=0;move[j]!='\0';j++)
        {
            if(move[j]=='E')
            {
                printf("S");
            }
            else
            {
                printf("E");
            }
        }
        printf("\n");
    }
}
