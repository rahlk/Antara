
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
    int cases;
    scanf("%d",&cases);
    int list[cases];
    for(int i=0;i<cases;i++) scanf("%d",&list[i]);
    for(int i=0;i<cases;i++){
        int n2=secondNum(list[i]);
        printf("Case #%d: %d %d\n",i,list[i]-n2,n2 );
    }
}