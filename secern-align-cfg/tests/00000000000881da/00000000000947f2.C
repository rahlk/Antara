#include <stdio.h>
#include <stdlib.h>

int main(){
    char *buf1 = malloc(1 << 26);
    char *buf2 = malloc(1 << 26);

    setvbuf(stdin, buf1, _IOFBF, 1 << 26);
    setvbuf(stdout, buf2, _IOFBF, 1 << 26);

    int t, num;
    int is = 0;
    int ie = 0;
    int js = 0;
    int je = 0;
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
        for (int j=0; j < num*2; j++){
            c = getchar();
            // printf("_%c_", c);

            if ((ie == je) && (is == js)){
                if (c == 'E'){
                    ie++;
                    js++;
                    printf("S");
                }
                else if(c == 'S'){
                    is++;
                    je++;
                    printf("E");
                }else{
                    break;
                }
            }else{
                if (c == 'E'){
                    ie++;
                }
                else if (c == 'S'){
                    is++;
                }
                else{
                    break;
                }

                if(je>js){
                    js++;
                    printf("S");
                }else{
                    je++;
                    printf("E");
                }
            }
        }

    }

    return 0;
}