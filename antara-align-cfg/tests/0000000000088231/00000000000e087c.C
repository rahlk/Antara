#include<stdio.h>
#include<math.h>
int find_four(long long int n);
int main(){
    long long int t,i,n,count=0;
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&n);
        long long int A,B;
        A=1;
        B=n-1;
        while(A<n || B>0){
            if(find_four(A)==0 && find_four(B)==0){
                printf("%lld %lld",A,B);
                break;
            }
            else{
                A++;
                B--;
            }
        }
    }
    return 0;
}

int find_four(long long int n){
    long long int r,i,flag=0;
    while(n>0){
            r=n%10;
            n=n/10;
            if(r==4){
                flag=1;
                break;
            }
    }
    if(flag==1)
        return 1;
    else
        return 0;
}