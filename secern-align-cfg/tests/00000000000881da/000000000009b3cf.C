#include <stdio.h>
#include <string.h>

int main(){
    int cases,size;
    if(scanf("%d",&cases)){}
    for(int i = 1; i <= cases; i++){
        if(scanf("%d",&size)){}
        char lydia[2*size];
        if(scanf("%s",lydia)){}
        for(int j = 0; j < strlen(lydia); j++){
            switch(lydia[j]){
                case 'E':
                    lydia[j] = 'S';
                    break;
                case 'S':
                    lydia[j] = 'E';
                    break;
            }
        }
        printf("Case #%d: %s\n",i,lydia);
    }
    return 0;
}