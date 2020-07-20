#include "stdio.h"
#include "string.h"
int main(){
    int t, i, j, count4, count8, a, b;
    char n[100000];
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%s", n);
        if(n[0] != 8){
            count4 = atoi(n);
            a = count4/2;
            b = count4 - a;
            printf("Case #%d: %d %d",i,a,b);
            printf("\n");
            
        }
        else{
            count8 = atoi(n);
            a = count8/2;
            b = count8 - a;
            printf("Case #%d: %d %d",i,a,b);
            printf("\n");
        }
    }
    return 0;
}
