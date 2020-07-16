#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int same_step;

char input_route[100005];

void show_answer(void);
int main(void){
    int T;
    int i;
    int len;
    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%d", &len);
        scanf("%s", input_route);
        printf("Case #%d: ", i+1);
        show_answer();
    }  
    return 0;
}
void show_answer(void){
    int i;
    for(i=0; i<strlen(input_route); i++){
        if(input_route[i] == 'S'){
            printf("E");
        }
        if(input_route[i] == 'E'){
            printf("S");
        }
    }
    printf("\n");
}