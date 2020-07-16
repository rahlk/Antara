#include <stdio.h>

int main(void){
    int x;
    scanf("%d", &x);
    
    int i;
    for(i = 0; i < x; i++){
        int N;
        scanf("%d", &N);
        
        int a,b;
        a = N;
        int again;
        do{
            again = 0;
            a = a/2;
            b = N - a;
            
            int tmpa = a;
            int tmpb = b;
            while(tmpa || tmpb){
                if(tmpa % 10 == 4){
                    again = 1;
                    break;
                }
                if(tmpb % 10 == 4){
                    again = 1;
                    break;
                }
                tmpa /= 10;
                tmpb /= 10;
            }
        }while(again);
        
        
        printf("Case #%d: %d %d\n", i+1, a, b);
    }
    
    
}


