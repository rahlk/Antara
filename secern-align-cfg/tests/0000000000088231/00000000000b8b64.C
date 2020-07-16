#include<stdio.h>

int main(){
    int i,t,num,n,m=2,x=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&num);
        n=num;
        do{
            if(n%10==4)x+=m;
            n/=10;
            m*=10;
        }while(n>0);
        
        printf("Case #%d: %d %d\n",i,x,num-x);
        
        x=0;m=2;
    }
    return 0;
}