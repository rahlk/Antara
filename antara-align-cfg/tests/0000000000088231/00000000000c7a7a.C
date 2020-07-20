#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    
    int t, n, a, b, iteration, i;
    if(!scanf("%d\n", &t)){
        printf("Error: no input");
        return(1);
    }
    for (i=1; i<=t; i++){
        scanf("%d\n", &n);
        a = n;
        b = 0;
        iteration = 1;
        while(n>=3){
            if(n%10==4) {
                b += iteration*2;
                a -= iteration*2;
            }
            n=n/10;
            iteration = iteration*10;
        }
        printf("Case #%d: %d %d\n", i, a, b);
    }
}
    
    