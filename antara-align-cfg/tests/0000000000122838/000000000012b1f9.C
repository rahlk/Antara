#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int T,res;
int max2(int tab[],int debut,int fin){
    int max = tab[debut-1];
    for(int i=debut-1;i<fin;i++){
        if (max<tab[i]){max = tab[i];}
    }
    return max;
}
int main()
{
    scanf("%d",&T);
    res=0;
    int N,K;
    int C[100000] , D[100000];
    for(int i=0;i<T;i++){
            res=0;
        scanf("%d %d",&N,&K);
        for(int i=0;i<N;i++){
            scanf("%d",&C[i]);
        }
         for(int i=0;i<N;i++){
            scanf("%d",&D[i]);
        }

        for(int i=0;i<N;i++){

        for(int j=i;j<N;j++){
                int h = max2(C,i+1,j+1)-max2(D,i+1,j+1);
                int t = abs(h);

            if(t<=K){res++;}
        }

        }
        printf("Case #%d: %d\n",i+1,res);


    }








    return 0;
}
