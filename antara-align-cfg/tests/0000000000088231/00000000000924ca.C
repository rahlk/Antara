#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    char out[100];
    int T, size = 0;
    
    scanf("%d",&T);
    
    for(int i = 0; i < T; i++){
        scanf("%s", input);
        size = strlen(input);
        printf("Case #%d: ", i+1);
        for (int j = 0; j < size; j++){
        	if (input[j] == '4'){
        		out[j] = '1';
        		printf("3");
        	}else{
        		out[j] = '0';
        		printf("%c", input[j]);
        	}
        }
        printf(" ");
        int cut = 0;
        for (int j = 0; j < size; ++j){
        	if (out[j] != '0'){
        		cut = j;
        		break;
        	}
        }
        for (int j = cut; j < size; ++j){
        	printf("%c", out[j]);
        }
        printf("\n");
    }
    
    return 0;
}