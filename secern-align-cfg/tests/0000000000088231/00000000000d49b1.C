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
    int i,j;
    for(i=1;i<(n/2)+1;i++){
                if(isCorrect(i)&&isCorrect(n-i)){
                    printf("Case #%d %d %d\n",t,i,n-i);
                    return 1;
                }
    }
}
int isCorrect(int a){
    int digit;
    while(a){
        digit=a%10;
        if(digit==4)
            return 0;
        a/=10;
    }
    return 1;
}
