#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"
int main(){
    int t,i,j,count4,tmp,a,b;
    char n[1000000];
    scanf("%d", &t);
    for(i=1;i<=t;i++){
        scanf("%s",n);
        tmp = atoi(n);
        count4 = n[0] - '0';
        for(j=0;j<1000000;j++){
            if(n[j]=='4')n[j] = '3';
        }
        count4 = atoi(n);
        a = count4;
        b = tmp - count4;
        if(b<0) b *= (-1);
            printf("Case #%d: %d %d", i,a,b);
            printf("\n");
    }
    return 0;
}