#include <stdio.h>
#include <stdlib.h>
int main(){
int T;
scanf("%d",&T);
int N[T];
char lydiaP[T][2000];
for(int l=0;l<T;l++){
    scanf("%d",&N[l]);
    scanf("%s",lydiaP[l]);
}
for(int l=0;l<T;l++){
char myP[l][2000];
    for(int i=0;i<(2*N[l]-2);i++){
    if((lydiaP[l][i]=='E')||(lydiaP[l][i]=='e')){
        myP[l][i]='S';
    }
    else if((lydiaP[l][i]=='S')||(lydiaP[l][i]=='s')){
        myP[l][i]='E';
    }
    else {
        printf("wrong");
    }
    }
    printf("case #%d :",l+1);
    for(int i=0;i<(2*N[l]-2);i++){
        printf("%c",myP[l][i]);
    }
    printf("\n");
    }

return 0;
}
