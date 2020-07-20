#include<stdio.h>
int main()
{
    int T,i,N,j;
    char ch=' ';
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        char ar[2*N];
        scanf("%s",ar);
        printf("Case #%d: ",i);
        for(j=0;j<2*N-2;j++)
        {
            ch=ar[j];
            if(ch=='S')
                printf("E");
            else
                printf("S");
        }
        printf("\n");
    }
    return 0;
}





