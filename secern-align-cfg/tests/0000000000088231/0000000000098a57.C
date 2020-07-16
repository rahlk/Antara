#include<stdio.h>

int main(){
int i1,n1;

scanf("%d",&n1);
for(i1=0;i1<n1;++i1){

long long int n;
scanf("%lld",&n);

int i,j,k;
long long int t=n;

while(t>=n/2){
    if(four(t))
       if(four(n-t)){
        printf("Case #%d: %lld %lld\n",i1+1,t,n-t);
        break;
       }
       --t;
}

}

return(0);
}

int four(long long int n){
long long int t=n;
int i,j,co=0;

while(t!=0){
    if(t%10==4){
        ++co;
        break;
    }
    t=t/10;
}

if(co==0)
    return(1);
else
    return(0);

}
