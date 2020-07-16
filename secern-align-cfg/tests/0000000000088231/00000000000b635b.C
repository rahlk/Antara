#include<stdio.h>
#include<stdlib.h>
main()
{
    int T,i=1,A,B;
    scanf("%d",&T);
    int N[T];
    while(i<=T)
    {
        scanf("%d",&N[i-1]);
        int k,q,e=1;
        A=k=N[i-1]-1;
        B=1;
        while(k>0)
        {
            q=k%10;
            if(q==4)
            {
                A=A-e;
                B=B+e;
            }
            k=k/10;
            e=e*10;
        }
        printf("Case #%d: %d %d \n",i,A,B);
        i++;
    }
}