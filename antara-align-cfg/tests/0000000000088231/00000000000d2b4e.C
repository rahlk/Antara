#include <stdio.h>

int main(){
    int T, i;
    int N;
    int a1,a2;
    int mult;
    scanf("%d",&T);
    
    for(i=0;i<T;i++){
        mult=1;
        a1=0;
        a2=0;
        scanf("%d",&N);
        while(N>0){
            switch(N%10){
                case 0:
                a2+=5*mult;
                case 1:
                a1+=5*mult;
                a2+=mult;
                N-=10;
                break;
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 9:
                a1+=mult;
                a2+=(N%10-1)*mult;
                break;
                case 5:
                a1+=2*mult;
                a2+=3*mult;
            }
            N/=10;
            mult*=10;
        }
        printf("Case #%d: %d %d",i+1,a1,a2);
    }
}