#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i,j;
    int test;
    int matdim;
    char move[50000];

    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d",&matdim);
        scanf("%s\n",move);
        printf("case #%d: ",i+1);
        for(j=0;j<strlen(move);j++){
            if(move[j]=='S'){
                printf("%c",'E');
            }
            else{
                printf("%c",'S');
            }
        }
        printf("\n");
    }

return 0;
}