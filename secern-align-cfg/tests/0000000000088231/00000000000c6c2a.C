#include <stdio.h>
#include <math.h>
int main(){
    int T;
    scanf("%d", &T);
    int C;
    for(C = 1; C <= T; C++){
        int N;
        scanf("%d", &N);
        for(int i = 1; i < N; i+=4){
            int sub_valid = 1, i_valid = 1;
            int sub = N - i;
            int d = (sub == 0) ? 1 : (int)log10(sub) + 1;
            for(int k = 0; k < d; k++){
                int c = (sub/(int)(pow(10,k)))%10;
                if (c == 4){
                    sub_valid = 0;
                    break;
                }
            }
            d = (i == 0) ? 1 : (int)log10(i) + 1;
            for(int k = 0; k < d; k++){
                int c = (i/(int)(pow(10,k)))%10;
                if (c == 4){
                    i_valid = 0;
                    break;
                }
            }
            if( i_valid && sub_valid ){
                printf("Case #%d: %d %d\n", C, i, sub);
                break;
            }
        }
    }
}(c == 4){
                    i_valid = 0;
                    break;
                }
            }
            if( i_valid && sub_valid ){
                printf("Case #%d: %d %d\n", C, i, sub);
                break;
            }
        }
    }
}