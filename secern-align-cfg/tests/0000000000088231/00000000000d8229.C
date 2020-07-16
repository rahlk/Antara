#include<stdio.h>
int checks(int,int);
int isCorrect(int);
int main(){
    int i,t,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        checks(n,i);
    }
}
int checks(int n,int t){
    int digit,current=1,sum=0,or=n;
    while(n){
        digit=n%10;
        if(digit==4)
            sum+=current;
        n/=10;
        current*=10;
    }
    printf("Case #%d: %d %d\n",t,sum,or-sum);
}