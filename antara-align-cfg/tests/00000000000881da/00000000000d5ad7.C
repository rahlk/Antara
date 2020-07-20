#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    long int n;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%li\n", &n);
        char moves[2*(n-1)];
        char ans[2*(n-1)];
        scanf("%s", moves);        
        for(int j=0; j<2*(n-1); j++){
            if(moves[j]=='S'){
                ans[j]='E';
            }
            if(moves[j]=='E'){
                ans[j]='S';
            }
        }
        printf("\nCase #%d: ", i+1);
        for(int k=0;k<2*(n-1); k++){
            printf("%c", ans[k]);
        }
    }
    return 0;
}