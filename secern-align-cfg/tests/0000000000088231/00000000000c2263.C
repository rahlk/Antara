#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int N,temp,a,b,i=1,flag,T,c,d,j;
    scanf("%lld",&T);
    j=1;
    while(T--){
        scanf("%lld",&N);
        i=1;
        while(1){
            a=N-i;
            b=i;
            c=a;
            d=b;
            flag=0;
            while(b!=0&&flag==0){
                if(b%10==4){
                    i++;
                    flag=1;
                }
                if(flag==0)
                b=b/10;
            }
            while(a!=0&&flag==0){
                if(a%10==4){
                    i++;
                    flag=1;
                }
                if(flag==0)
                a=a/10;
            }
            if(flag==0)
                break;
        }
    printf("Case #%lld:",j);
    j++;
    printf("%lld %lld\n",c,d);
    }
}
