#include <stdio.h>

int search(int itv, int a, int N){
    if(itv == 0){
        return 0;
    }
    
    int t_a = a - itv;
    int b = N - t_a;
    
    int again = 0;
    int tmp_a = t_a;
    int tmp_b = b;
    while(tmp_a || tmp_b){
        if(tmp_a % 10 == 4){
            again = 1;
            break;
        }
        if(tmp_b % 10 == 4){
            again = 1;
            break;
        }
        tmp_a /= 10;
        tmp_b /= 10;
    }
    if(again == 0)
        return t_a;
    
    t_a = a + itv;
    b = N - t_a;
    
    again = 0;
    tmp_a = t_a;
    tmp_b = b;
    while(tmp_a || tmp_b){
        if(tmp_a % 10 == 4){
            again = 1;
            break;
        }
        if(tmp_b % 10 == 4){
            again = 1;
            break;
        }
        tmp_a /= 10;
        tmp_b /= 10;
    }
    if(again == 0)
        return t_a;
    
    t_a = search(itv/2, a - (itv/2), N);
    if(t_a != 0)
        return t_a;
    t_a = search(itv/2, a + (itv/2), N);
    return t_a;
}

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
        
        int j;
        for(j = 0; j < 2; j++){
            again = 0;
            a /= 2;
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
            if(again == 0)
                break;
        }
        
        if(again == 1)
            a = search(a/2, a, N);
        
        b = N - a;
        printf("Case #%d: %d %d\n", i+1, a, b);
    }
}
