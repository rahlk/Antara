#include<stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
    int t,tcase=0;
    scanf("%d",&t);
    while(t != tcase){
            char s1[14];
            int r;
long int a,b;
        scanf("%s",&s1);
        r=strlen(s1);
        char s2[r+1];
        int n=0;
        while(n<r){
           if(s1[n]=='4'){ s1[n]='2';
            s2[n]='2';
            n++;
        }
    else{
    s2[n]='0';
    n++;}}
    a=atol(s1);
    b=atol(s2);
        printf("Case #%d: %ld %ld\n",tcase+1,a,b);
        tcase++;
    }}
