#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long int n;
        scanf("%ld",&n);
        long int num = n, x=0, y=0;
        while(num>0){
            if(num%10==4){
                x=x*10 + 3;
                y=y*10 + 1;
            }
            else{
                x = x*10 + num%10;
                y = y*10;
            }
            num = num /10;
        }
        printf("Case #%d: %d %d\n",i+1,x,y);
    }
}