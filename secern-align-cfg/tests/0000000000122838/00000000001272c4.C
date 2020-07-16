#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int T,res;
int main()
{
    scanf("%d",&T);
    res=0;
    int N,K;
    int C[100000] , D[100000];
    for(int i=0;i<T;i++){
        scanf("%d %d",&N,&K);
        for(int i=0;i<N;i++){
            scanf("%d",&C[i]);
        }
         for(int i=0;i<N;i++){
            scanf("%d",&D[i]);
        }

        for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
                int h = C[i]-D[i];
                int t = abs(h);
            if(t<=K){res++;}
        }
        }
        printf("Case #%d: %d",i+1,res);


    }








    return 0;
}
