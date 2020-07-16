#include<stdio.h>
#include<stdlib.h>

main(){
    int T,N;
    int i,j;
    scanf("%d",&T);

    for(i=1;i<=T;i++){
        scanf("%d",&N);
        char P[2*N-2];
        char Pable[2*N-2];
        scanf("%s",&P);

        for(j=0;j<(2*N-2);j++){
            if(P[j]=='E'){
                Pable[j]='S';
            }else if(P[j]=='S'){
                Pable[j]='E';
            }
        }

        printf("Case: #%d: ",i);

        for(j=0;j<(2*N-2);j++){
            printf("%c",Pable[j]);
        }

        printf("\n");
    }
}

