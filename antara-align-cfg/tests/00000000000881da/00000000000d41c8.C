#include<stdio.h>
#include<stdlib.h>
int main(){
    int T,j=1,i;
    scanf("%d",&T);
    while(T--){
        int N;
        scanf("%d",&N);
        char string[2*N-2];
        scanf("%s",string);
        printf("Case #%d: ",j);
        j++;
        for(i=0;string[i]!='\0';i++){
            if(string[i]=='E')
                printf("S");
            else
                printf("E");
        }
        printf("\n");
    }
}
