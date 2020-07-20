#include<stdio.h>
long long int pow1(int n){
    long long int out=1;
    int i;
    for(i=0;i<n;i++){
        out*=10;
    }
    return out;
}
int main(){
    int n,i;
    scanf("%d",&n);
    long long int test[n];
    for(i=0;i<n;i++){
        scanf("%lld",&test[i]);
    }
    for(i=0;i<n;i++){
            long long int m=test[i],n1=0;
            int j=0;
            while(test[i]){
            if(test[i]%10==4){
                n1=n1+pow1(j);
                m=m-pow1(j);
        }
        test[i]/=10;
        j++;
    }
    printf("case #%d: %lld %lld\n",i+1,m,n1);
    }
    return 0;
}
