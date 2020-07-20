#include<stdio.h>

main()
{
    int t, ti;
    long long int i, n;
    char c, myRoute[100000];
    scanf("%d",&ti);
    for(t=0;t<ti;t++)
    {
        scanf("%lld",&n);
        for(i=0;i<2*n - 2;i++)
        {
            scanf("%c",&c);
            if(c == 'E')
            {
                myRoute[i] = 'S';
            }
            if(c == 'S')
            {
                myRoute[i] = 'E';
            }
        }
        printf("Case #%d: ",t+1);
        for(i=0;i<2*n - 2;i++)
        {
            printf("%c",myRoute[i]);
        }
        printf("\n");
    }
}