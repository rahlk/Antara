#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long powOf(int a , int b){
    long long ans = 0;
    for(int i = 0 ; i < b ; i++){
        ans = ans * a;
    }
    return ans;
}


char * func(long long N){
    char * str;
    char * str2;
    str = malloc(sizeof(char) * powOf(10,100));
    str2 = malloc(sizeof(char) * powOf(10,100));
    sprintf(str,"%d",N);
    for(int i = 0 ; i < strlen(str) ; i++){
        if(str[i] == '4'){
            str[i] = '3';
            str2[i] = '1';
        }
        else
            str2[i] = '0';
    }
    return strcat(strcat(str," "),str2);
}

int main(int argc , char * argv[]){
    long long N;
    int T;
    scanf("%d",&T);
    for(int i = 1 ; i <= T ; i++){
        scanf("%d",&N);
        printf("Case #x: ");
        printf("%s\n",func(N));
    }
}
