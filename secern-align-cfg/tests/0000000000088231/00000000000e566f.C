#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int nr_of_4(unsigned long long n){
    int k=0;
    while(n){
        if(n%10==4)
        k++;
        n=n/10;
    }
    return k;
}

int where_is_4(unsigned long long n){
    int k=0;
    while(n){
        if(n%10==4)
        return k;
        n=n/10;
        k++;
    }
    return k;
}

int main(){
    int T,i;
    unsigned long long N,A=4,B=4,temp;
    scanf("%d",&T);
    printf("\n");
    for(i=1;i<=T;i++){
        scanf("%llu",&N);
        if(N%2==0){
            A=N/2;
            B=A;
            while(nr_of_4(A)!=0&&nr_of_4(B)!=0){
                temp=where_is_4(A);
                A-=pow(10,temp);
                B+=pow(10,temp);
            }
        }
        else{
            A=(N-1)/2;
            B=A;
            while(nr_of_4(A)!=0&&nr_of_4(B)!=0){
                temp=where_is_4(A);
                A-=pow(10,temp);
                B+=pow(10,temp);
            }
            A=A+1;
            while(nr_of_4(A)!=0&&nr_of_4(B)!=0){
                A-=1;
                B+=1;
            }
        }
        printf("    Case #%d: %llu %llu\n",i,A,B);
    }
    return 0;
}