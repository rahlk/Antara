#include <stdio.h>
#include <string.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int _t=1;_t<=T;_t++){
        char N[1000],A[1000]={0},B[1000]={0};
        scanf("%s",N);
        int len = strlen(N);
        for(int i=0; i<len; i++){
            if(N[i] == '0'){
                A[i] = B[i] = '0';
            }else if(N[i] != '5'){
                A[i] = N[i] - 1;
                B[i] = N[i] - A[i] + '0';
            }else{
                A[i] = '2';
                B[i] = '3';    
            }
        }
        char *a = A;
        char *b = B;
        while( '0' == (*a) )  a++;
        while( '0' == (*b) )  b++;
        if( *a == '\0' ){ *a = '0';}
        if( *b == '\0' ){ *b = '0';}
        printf("Case #%d: %s %s\n",_t,a,b);
    }
    return 0;
}