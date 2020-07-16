#include<stdio.h>
#include <conio.h>
int main(){
    int T;
    long int N;
    scanf("%d",&T);
    while(T>0){
        scanf("%ld",&N);
        int p,q;
       do{
           
        p=N-1;
        q=N-p;}while(p+q!=N)
            
        printf("#&d: %d %d",T,p,q);
        
    }
}