#include <stdio.h>
#include <stdlib.h>
int main(){
int T;
scanf("%d",&T);
int N[T];
char lydiaP[T][1000];
for(int l=0;l<T;l++){
    scanf("%d",&N[l]);
    scanf("%s",lydiaP[l]);
}
for(int l=0;l<T;l++){
int myP[l][1000];
    for(int i=0;i<(2*N[l]-2);i++){
    if((lydiaP[l][i]=='E')||(lydiaP[l][i]=='e')){
        myP[l][i]='S';
    }
    else if((lydiaP[l][i]=='S')||(lydiaP[l][i]=='s')){
        myP[l][i]='E';
    }
    else {
        printf("wrong");
        return;
    }
    }
    printf("case #%d :",l+1);
    for(int i=0;i<(2*N[l]-2);i++){
        printf("%c \n",myP[l][i]);
    }
    }

return 0;
}