#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char big_num[105];
char output_1[105];
char output_2[105];
int num_len;

void setup(void);
void pre_process(void);
void calculate(void);
void show_answer(void);

int main(void){
    int T;
    int i;
    scanf("%d", &T);

    for(i=0; i<T; i++){
        setup();
        scanf(" %s", big_num);
        pre_process();
        calculate();
        show_answer();
    }
    return 0;
}

void setup(void){
    memset(big_num, 0, 105);
    memset(output_1, 0, 105);
    memset(output_2, 0, 105);
    num_len = 0;
}
void pre_process(void){
    int i;
    num_len = strlen(big_num);
    for(i=0; i<num_len; i++){
        big_num[i] -= '0';
    }
}
void calculate(void){
    int i;
    for(i=0; i<num_len; i++){
        if(big_num[i] == 4){
            output_1[i] = 2;
            output_2[i] = 2;
        }
        else{
            output_1[i] = big_num[i];
            output_2[i] = 0;
        }
    }
}
void show_answer(void){
    int flag1 = 0;
    int flag2 = 0;
    int i;
    for(i=0; i<num_len; i++){
        if(output_1[i] != 0){
            flag1 = 1;
        }
        if(flag1 == 1){
            printf("%d", output_1[i]);
        }
    }
    printf(" ");
    for(i=0; i<num_len; i++){
        if(output_2[i] != 0){
            flag2 = 1;
        }
        if(flag2 == 1){
            printf("%d", output_2[i]);
        }
    }
    printf("\n");
}