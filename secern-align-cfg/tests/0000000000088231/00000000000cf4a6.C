#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int powOf(int a , int b){
    int ans = 0;
    for(int i = 0 ; i < b ; i++){
        ans = ans * a;
    }
    return ans;
}


char * parse(long long a){
    
}

char * func(char * N){
    char * str2;
    str2 = malloc(sizeof(char) * powOf(10,100));

    for(int i = 0 ; i < strlen(N) ; i++){
        if(N[i] == '4'){
            N[i] = '3';
            str2[i] = '1';
        }
        else
            str2[i] = '0';
    }
    return strcat(strcat(N," "),str2);
}

void clean(char * N){
    for(int i = 0 ; i < strlen(N) ; i++){
        N[i] = '0';
    }
}

int main(int argc , char * argv[]){
    char * N;
    int T;
    N = malloc(sizeof(char) * powOf(10,100));
    if(!N)
        printf("NO");
    scanf("%d",&T);
    for(int i = 1 ; i <= T ; i++){
        clean(N);
        scanf("%s",N);
        printf("Case #%d: ",i);
        printf("%s\n",func(N));
    }
}
