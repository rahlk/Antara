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
        for(j=0;move[j]!='\0';j++)
        {
            if(move[j]=='E')
            {
                move[j]='S';
            }
            else
            {
                move[j]='E';
            }
        }
        printf("Case #%d: %s\n",i+1,move);
    }
}
