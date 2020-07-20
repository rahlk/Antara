#include<stdio.h>
long long int split(long long int );
void main(){
    int C,i;
    long long int N,A,B;
    scanf("%d",&C)
    for(i=0;i<C;i++){
        scanf("%lld",&N);
        A=split(N);
        B=N-A;
        printf("Case #%d:%lld %lld",&i,&A,&B);
    }
}
long long int split(long long int N){
    long long int A=0,B=0,C=0,D=0,E=0,F=0;
    int i=0,j=0,k=0;
    booelan flag=false;
    A=N/2;
    B=N-A;
    C=A;
    D=B;
    do{
        E=C;
        F=D;
        int in=0,jn=0;
        while(E!=0){
            E=E/10;
            in++;
        }
        while(F!=0){
            F=F/10;
            jn++;
        }
        while(in!=0){
            if(C%10^i!=4){
                if(D%10^j!=4){
                    flag=true;
                    A=C;
                    }
                jn--;
                j++;
            }
            i++;
            in--;
        }
    }while(flag==false);
    return A;
}