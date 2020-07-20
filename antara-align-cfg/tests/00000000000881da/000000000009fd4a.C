#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
char h;
scanf("%c",&h);
for(int i=0;i<T;i++){
    int n;
    char c;
    scanf("%c",&c);
    scanf("%d",&n);
    printf("Case #%d: ",i+1);
    while(c!='\n'){
        if(c=='S') printf("E");
        else if(c=='E') printf("S");
        scanf("%c",&c);
    }
    printf("\n");
}
}