#include<stdio.h>
#include<stdlib.h>

int main() {
    int tc;
    scanf("%d", &tc);
    for(int i=0; i<tc;i++){
    int l;
    scanf("%d", &l);
    char p[2*l-2];
    scanf("%s", &p);
    
    for(int f=0;f<2*l-2;f++){
    if(p[f]=='S'){
    p[f]='E';}
    else{
    p[f]='S';
    }
    }
    printf("Case #%d: %s", i+1, p);
    printf("\n");
}
}