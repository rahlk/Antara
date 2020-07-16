#include<stdio.h>
main()
{
    int T,m=1;
    scanf("%d",&T);
    while(m<=T)
    {
        int N,i,j;
        scanf("%d",&N);
        i=2*N-2;
        char a[i];
        scanf("%s",a);
        printf("Case #%d: ",m);
        for(j=0;j<i;j++)
            if(a[j]=='S')
                printf("N");
            else
                printf("S");
        printf("\n");
        m++;
    }
}