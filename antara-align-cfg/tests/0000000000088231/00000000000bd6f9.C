#include<stdio.h>

int main(void){
        int testNum;
        scanf("%d", &testNum);
        //printf("testNum: %d\n", testNum);

        for(int i = 0 ; i < testNum ; i++){
                int num, a = 0, b = 0;
                scanf("%d", &num);
                //printf("%d\n", num);

                for(int j = 1 ; ; j *= 10){
                        int tmp = num/j;
                        if(tmp){
                                tmp %= 10;
                                if(tmp == 4){
                                        a += (2*j);
                                        b += (2*j);
                                }
                                else{
                                        a += (tmp*j);
                                }
                        }
                        else{
                                break;
                        }
                }

                printf("Case #%d: %d %d\n", i+1, a, b);
        }
        return 0;
}