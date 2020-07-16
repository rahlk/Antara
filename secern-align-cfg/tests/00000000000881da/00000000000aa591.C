#include <stdio.h>
#include<string.h>

main()
{
    int T,k;
    scanf("%d",&T);
    k=T;
    while(T--)
    {
        int N,i,j,p,q;
        scanf("%d",&N);
        
        char S[2*N-2];
        
        scanf("%s",S);
        
        for(i=0;i<(2*N-2);i++)
        {
            if(S[i]==69)
            S[i]=83;
            else
            S[i]=69;
        }
        printf("Case #%d: ",k-T);
        printf("%s",S);
        printf("\n");
    }
}