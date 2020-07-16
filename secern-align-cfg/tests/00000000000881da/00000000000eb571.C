#include <stdio.h>

int main(){
    int T,N;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        char str[2*N-2];
        int s[N-1];
        int e[N-1];
        int s_ind,e_ind;
        s_ind=0;
        e_ind=0;
        for(int j=0;j<(2*N-2);j++){
            scanf(" %c",&str[j]);
        }
        for(int j=0;j<(2*N-2);j++){
            if(str[j]=='S'){
                s[s_ind]=j;
                s_ind++;
            }
            else{
                e[e_ind]=j;
                e_ind++;
            }
        }
        for(int i=0;i<(N-1);i++){
            // printf("%d %d\n", e[i], s[i]);
            str[e[i]]='S';
            str[s[i]]='E';
        }
        for(int j=0;j<(2*N-2);j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}