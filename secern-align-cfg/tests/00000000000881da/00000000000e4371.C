#include<stdio.h>
#include<stdlib.h>

int main() {
    int tc;
    scanf("%d", &tc);
    for(int i=0; i<tc;i++){
    int l;
    scanf("%d", &l);
    char p[l];
    scanf("%s", &p);
    
    for(int f=0;f<l;f++){
    if(p[f]=='S'){
    p[f]='E';}
    if(p[f]=='E'){
    p[f]='S';
    }
    }
    printf("Case #%d: %s", i, p);
}
}