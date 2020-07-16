#include<stdio.h>

int main(void){
        int testNum;
        scanf("%d", &testNum);
        //printf("testNum: %d\n", testNum);

        for(int i = 0 ; i < testNum ; i++){
                int num, e = 0, s = 0, cnt = 0;
                scanf("%d", &num);
                getchar();
                printf("Case #%d: ", i+1);

                for(int n = 0 ; n < 2*num-2 ; n++ ){
                        char direction = getchar();

                        if(direction == 'E'){
                                printf("S");
                        }
                        else{//direction == 'S'
                                printf("E");
                        }
                }
                printf("\n");

        }
        return 0;
}