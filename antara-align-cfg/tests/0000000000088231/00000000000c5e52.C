
#include<stdio.h>
int secondNum(int n){
    int d;
    int i=1;
    int n2=0;
    while(n>0){
        d=n%10;
        if(d==4){
            n2=n2+4*i - i;
        }
        n/=10;
        i*=10;
        }
    return n2;
}


int main(){
    int n;
    scanf("%d",&n);
    int n2=secondNum(n);
    printf("%d %d\n",n-n2,n2 );
}