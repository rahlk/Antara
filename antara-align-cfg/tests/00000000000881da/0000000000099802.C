#include <stdio.h>
#include <string.h>

int main(){
    char input[100000];
    int T, size = 0;
    
    scanf("%d",&T);

    for(int i = 0; i < T; i++){
        int mSize;
        scanf("%d", &mSize);
        scanf("%s", input);
        size = strlen(input);
        printf("Case #%d: ", i+1);
        for (int j = 0; j < size; ++j){
            if(input[j] == 'S') printf("E");
            if(input[j] == 'E') printf("S");
        }
        printf("\n");
    }
    
    return 0;
}