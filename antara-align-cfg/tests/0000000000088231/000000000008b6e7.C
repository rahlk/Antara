#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int q,t;
    scanf("%d ",&t);
    for(q=0;q<t;q++){
        char arr[1000]={0};
        char brr[1000]={0};
        char c;
        int a=0,b=0,i=0;
        while(scanf("%c",&c)>0){
            if(c=='\n'||c==' '||c==0){
                break;
            }
            if(c=='4'){
                arr[a]='2';
                brr[a]='2';
            }
            else{
                arr[a]=c;
                brr[a]='0';
            }
            a++;
        }
        printf("Case #%d: ",q+1);
        for(i=0;i<a;i++){
            printf("%c",arr[i]);
        }
        printf(" ");
        for (i = 0; i < a; i++) {
          printf("%c",brr[i]);
        }
        printf("\n");
    }
}
