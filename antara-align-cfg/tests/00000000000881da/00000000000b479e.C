#import <malloc.h>
#import <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    int N;
    char * ptr = malloc(2*1000 - 2);
    for (int i = 1; i <= T; i++){
        scanf("%d",&N);
        scanf("%s",ptr);
        
        for (int j = 0; j < (2*N - 2); j++){
            if (ptr[j] == 'S'){
                ptr[j] = 'E';
            } else {
                ptr[j] = 'S';
            }
        }
        
        printf(" Case #%d: %s \n",i,ptr);
    }
    return 0;
}