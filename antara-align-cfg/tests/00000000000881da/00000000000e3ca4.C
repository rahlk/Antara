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
    }
    for(int f=0;f<l;f++){
    if(char[f]=='S'){
    char[f]='E';
    }
    if(char[f]=='E'){
    char[f]='S';
    }
    printf("Case #%d: %s", i, p);
}