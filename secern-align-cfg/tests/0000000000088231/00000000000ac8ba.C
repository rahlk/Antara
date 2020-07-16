#include<stdio.h>
int check(long long int n){
    while(n){
        if(n%10==4)return 1==1;
        else n/=10;
    }
    return 1==0;
}
int main(){
    int n,i;
    scanf("%d",&n);
    long long int test[n],out[n*2];
    for(i=0;i<n;i++){
        scanf("%lld",&test[i]);
    }
    for(i=0;i<n;i++){
        long long int t1=test[i];
        long long int t2=0;
        if(!check(t1)){
        out[i*2]=t1;
        out[(i*2)+1]=t2;
            }
              if(t1%2==1){
                t1=t1-1;
                t2=t2+1;
            }
        while(check(t1) || check(t2)){
                if(t1%2==1){
                t1=t1-1;
                t2=t2+1;
            }
            if(t1==0){
                t1=t2;
                t2=0;
            }
                t1=t1/2;
                t2=t2+t1;
            }
            out[i*2]=t1;
            out[(i*2)+1]=t2;
    }
    for(i=0;i<n;i++){
            printf("Case #%d: %lld %lld\n",i+1,out[i*2],out[(i*2)+1]);
        }
    return 0;
}
