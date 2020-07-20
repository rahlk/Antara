#include<stdio.h>
void output(long long int x){
    long long int a=0,b=0,y=1;
    int digit;
    while(x > 0){
        digit = x%10;
        if(digit == 4){
            a = 2*y + a;
            b = 2*y + b;
        }
        else{
            a = digit*y +a;
        }
        y = y*10;
        x = x/10;
    }
    printf("%lld %lldd\n",a,b);
}
int main(){
    int t;
    scanf("%d",&t);
    long long int v;
    for(int i=0;i<t;i++){
        scanf("%lld",&v);
        printf("Case #%d: ",i+1);
        output(v);
    }
}