#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[100];
    int t;
    scanf("%d\n",&t);
    for(int i = 0 ; i < t ; i++){
        gets(str);
        int a = strlen(str);
        int* number = (int*)malloc(a*sizeof(int));
        int* cnumber = (int*)malloc(a*sizeof(int));
        for(int j = 0 ; j < a ;j++){
            if(str[j] == '4'){
                cnumber[j] = 1;
                number[j] = 3;
            }
            else{
                cnumber[j] = 0;
                number[j] = (int)(str[j])-'0';
            }
        }
        int flag;
        for(int k = 0 ; k < a ; k++){
            if(cnumber[k] != 0){
                flag = k;
                break;
            }
        }
        printf("Case #%d: ",i+1);
        for(int l = 0 ; l < a; l++){
            printf("%d",number[l]);
        }
        printf(" ");
        for(int m = flag ; m < a ; m++)
            printf("%d",cnumber[m]);
        printf("\n");
        free(number);
        free(cnumber);
    }
    
    return 0;
}