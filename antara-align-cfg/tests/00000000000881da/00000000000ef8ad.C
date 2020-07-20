#include <stdio.h>

int main()
{
    int t=0;
    int n=0;
    char car = 0;
    scanf("%i", &t);
    for(int y=0; y<t; y++){
        scanf("%i", &n);
        printf("Case #%i: ",y+1);
        for(int i=0; i<2*n-2; i++){
            scanf(" %c", &car);
            if(car == 'S'){
                printf("E");
            }
            else{
                printf("S");
            }
        }
        if(y!=t-1){
            printf("\n");
        }
    }
}
