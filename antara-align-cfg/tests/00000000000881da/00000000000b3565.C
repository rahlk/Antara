#import <malloc.h>
#import <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    int N;
    char * ptr = NULL;
    char * tempo = NULL;
    for (int i = 1; i <= T; i++){
        scanf("%d",&N);
        ptr = malloc(2*N - 2);
        tempo = malloc(2*N - 2);
        scanf("%s",tempo);
        strcpy(ptr,tempo);
        
        for (int j = 0; j < (2*N - 2); j++){
            if (ptr[j] == 'S'){
                ptr[j] = 'E';
            } else {
                ptr[j] = 'S';
            }
        }
        
        printf(" Case #%d: %s \n",i,ptr);
        free(ptr);
        free(tempo);
    }
    return 0;
}