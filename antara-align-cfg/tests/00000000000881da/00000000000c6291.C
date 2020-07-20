#include <stdio.h>
#include <string.h>

int main(){
    int test;
    scanf("%d",&test);
    for (int i=1 ; i<=test ; i++){
        int n;
        scanf("%d",&n);
        char *input, *output;
        int y = (2*n-2);
        input = (char*)malloc(sizeof(char)*y);
            scanf("%s",input);
        output = (char*)malloc(sizeof(char)*strlen(input));
        printf("Case #%d: ",i);
        for(int k=0 ; k<2*n-2 ; k++){
            if (input[k] == 'E') printf("%c",'S');
            else if (input[k]=='S') printf("%c",'E');
        }
        printf("\n");

    }
    return 0;
}