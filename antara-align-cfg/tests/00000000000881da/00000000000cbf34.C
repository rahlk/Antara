#include<stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
    int t,tcase=0;
    scanf("%d",&t);
    while(t != tcase){
            char s2[50000];
            int r,m;
        scanf("%d\n%s",&m,&s2);
        r=strlen(s2);
        int n=0;
        while(n<r){
           if(s2[n]=='E'){
            s2[n]='S';
            n++;
        }
   else
   {
       s2[n]='E';
       n++;
   }}

        printf("Case #%d: %s \n",tcase+1,s2);
        tcase++;
    }}