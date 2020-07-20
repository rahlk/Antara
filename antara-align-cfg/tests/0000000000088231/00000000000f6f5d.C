#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"
int main(){
    int t, i, j, count4, tmp, a, b;
    char n[1000];
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%s", n);
        tmp = atoi(n);
        count4 = n[0] - '0';
        for(j = 0; j<1000; j++){
            //count4 = n[j] - '0';
          //  printf("d", count4);
            if(n[j] == '0' || n[j] == '2' || n[j] == '4' ||n[j] == '6'||n[j] == '8' )n[j] = '3';
        }
        count4 = atoi(n);
        a = count4;
        b = tmp - count4;
        if(b<0) b = b*-1;
            printf("Case #%d: %d %d",i,a,b);
            printf("\n");
        /*if(n[0] != 8){
            count4 = atoi(n);
            a = count4/2;
            b = count4 - a;
            printf("Case #%d: %d %d",i,a,b);
            printf("\n");

        }
        else{
            count8 = atoi(n);
            a = count8/5;
            b = count8 - a;
            printf("Case #%d: %d %d",i,a,b);
            printf("\n");
            */
    }
    return 0;
}
