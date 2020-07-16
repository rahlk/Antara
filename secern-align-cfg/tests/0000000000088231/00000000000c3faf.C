#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int charToNumber(char c){
    return c-((int)'0');
}

void calculate(int test, char *number){
    int A=0, B=0;
    int index=1;
    int length=strlen(number);
    for(int i=length-1;i>=0;i--){
        int digit=charToNumber(number[i]);
        if(digit==4){
            A+=2*index;
            B+=2*index;
        }else{
            A+=digit*index;
        }
        index*=10;
    }
    printf("Case #%d: %d %d\n", test, A, B);
}

int main(int argc, char const *argv[])
{   int testnb;scanf("%d", &testnb);
    for(int i=0;i<testnb;i++){
        char number[1000];
        scanf("%s", number);
        calculate(i+1, number);
    }
    return 0;
}
