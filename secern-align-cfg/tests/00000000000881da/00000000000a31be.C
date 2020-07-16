#include <stdio.h>
#include <string.h>
char S[200000];
int main(){
    int T;
    scanf("%d",&T);
    for(int _t=1;_t<=T;_t++){
        int N;
        scanf("%d %s",&N,S);
        int len = strlen(S);
        for(int i=0;i<len;i++){
            S[i] = S[i] == 'E' ? 'S' : 'E';
        }
        printf("Case #%d: %s\n",_t,S);
    }
    return 0;
}