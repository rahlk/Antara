#include<stdio.h>
#include<stdlib.h>

void main(){
    long long int a,b,n;
    int t,rem,x,i;
    scanf("%d",&t);
    for(i = 0; i < t; i++){
        scanf("%lld", &n);
        x=1;
        a=0;
        b=0;
        while(n){
        rem=n%10;
        n=n/10;
        if(rem==4)
        {a+=2*x;
        b+=2*x;
        }
        else
        {a+=rem*x;
        x=x*10;}
        }
            printf("Case #%d: %ld %ld\n", i + 1, a, b);
    }
    exit(0);
}