#include<stdio.h>

main()
{
    int t, ti;
    long long int i, n;
    char dir[100000];
    scanf("%d",&ti);
    for(t=0;t<ti;t++)
    {
        scanf("%lld",&n);
        scanf("%s",dir);
        printf("Case #%d: ",t+1);
        for(i=0;i<2*n - 2;i++)
        {
            if(dir[i] == 'E')
            {
                printf("%c",'S');
            }
            if(dir[i] == 'S')
            {
                printf("%c",'E');
            }
        }
        printf("\n");
    }
}