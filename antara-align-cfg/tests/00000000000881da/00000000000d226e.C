#include <stdio.h>
#include <string.h>
void main(){
    int t;
    scanf("%d", &t);
    int i=0;
    
    while(i<t){
        int n;
        scanf("%d", &n);
        int len = 2*n-2;
        int str[len];
        gets(str);
        int j =0;
        while(j<len){
            if(str[i] == "E")
                printf("S");
            else printf("S")
            j++;}}}