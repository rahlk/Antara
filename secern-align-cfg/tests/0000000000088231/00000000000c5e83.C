#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int charToNumber(char c){
    return c-((int)'0');
}
char numToChar(int n){
    return (char)((int)'0'+n);
}

void calculate(int test, char *number){
    char A[1000], B[1000];
    int index=1;
    int length=strlen(number);
    int nb=0;
    for(int i=0;i<length;i++){
        int digit=charToNumber(number[i]);
        if(digit==4){
            A[nb]='2';
            B[nb]='2';
            A[nb+1]='\0';
            B[nb+1]='\0';
        }else{
            A[nb]=numToChar(digit);
            A[nb+1]='\0';
        }
        nb++;
        index*=10;
    }
    printf("Case #%d: %s %s\n", test, A, B);
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
