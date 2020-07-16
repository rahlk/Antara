#include<stdio.h>
/*
int checkfor8(int n){
    while(n>0){
        if((n%10)==8){
            return 1;
        }
        n = n/10;
    }
    return 0;

}*/
int checkfor4(int n){
    while(n>0){
        if((n%10)==4){
            return 1;
        }
        n = n/10;
    }
    return 0;

}
int main(void){

    int T,i=1;
    unsigned long long int N,A,B;
    scanf("%d",&T);

    while(T--){
        scanf("%llu",&N);

       /* if(!(checkfor8) && ((N%10)%2)==0){
            printf("Case #%d: %llu %llu\n",i,N/2,N/2);
            i++;
        }
        else{*/
            start:
            A = (rand()%(N-1+1))+1;
            B = N-A;
        if(checkfor4(A) || checkfor4(B))
            goto start;
        printf("Case #%d: %llu %llu\n",i,A,B);
        i++;
        //}

    }



}
