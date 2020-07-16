#include <stdio.h>

int contains_four(int num){
    int four = 0;
    while(num>0){
        int dig = num%10;
        if(dig==4){
            four =1;
            break;
        }
        num/=10;
    }
    return four;
}

int main(){
    int t=0;
    int n=0;
    scanf("%i", &t);
    int i=0, i2=0;
    for(int y=0; y<t; y++){
        scanf("%i", &n);
        for(i=1; i<n; i++){
            if(contains_four(i)){
                continue;
            }
            else{
                for(i2=1 ; i2<n; i2++){
                    if(contains_four(i2)){
                        continue;
                    }
                    else{
                        if(i+i2 == n){
                            printf("Case #%i: %i %i", y+1, i, i2);
                            if(y!=t-1){
                                printf("\n");
                            }
                            i2 = n;
                            i=n;
                            break;
                        }
                    }
                }
            }
        }
    }
}