#include <stdio.h>
#include <stdlib.h>

int main(){
    char *buf1 = malloc(1 << 26);
    char *buf2 = malloc(1 << 26);

    setvbuf(stdin, buf1, _IOFBF, 1 << 26);
    setvbuf(stdout, buf2, _IOFBF, 1 << 26);

    int t, num;
    char c;

    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        if (i == 0){
            printf("Case #%d: ", i + 1);
        }
        else{
            printf("\nCase #%d: ", i + 1);
        }

        scanf("%d", &num);
        getchar();
        for (int j=0; j < num*2-2; j++){
            c = getchar();
            if(c == 'E'){
                printf("S");
            }else if(c == 'S'){
                printf("E");
            }else{
                break;
            }
            
        }

    }

    return 0;
}