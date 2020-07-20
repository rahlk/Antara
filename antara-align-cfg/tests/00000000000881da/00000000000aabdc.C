#include <stdio.h>
int main(){
    int T;
    scanf("%d", &T);
    getchar();
    for(int t=1;t<=T;t++){
        int l;
        scanf("%d", &l);
        getchar();
        printf("Case #%d: ", t);
        for(int p=2;p<l*2;p++){
            char move = getchar();
            if(move == 'E'){
                putchar('S');
            }
            else if(move == 'S'){
                putchar('E');
            }
            else{
                printf("B");
            }
        }
        putchar('\n');
        
    }
    return 0;
}