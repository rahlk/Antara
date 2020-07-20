#include<stdio.h>

int main(){
    int t,n,i,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        scanf("%d",&n);
        int digits=0, b=0, num=n;
        while(n>0){n/=10;digits++;}n=num;
        for(i=1;i<=digits;i++){
            b*=10;b+=1;
            if(n%10==5){b+=1;}
            if(n%10==0){b-=1;}
            n/=10;
        }
        printf("Case #%d: %d %d\n",j,num-b,b);
    }
}
