#include <stdio.h>
#include <string.h>

#define SIZE 50000

int main(){
    char path[SIZE];
    int T,t,n;
    
    scanf("%d",&T);

    for(int t = 1 ; t  <= T ; t++){
        scanf("%d",&n);
        scanf("%s",path);

        for(int i = 0 ; i < strlen(path); i++)
            path[i] = (path[i] == 'S') ? 'E' : 'S';    
        
        printf("Case #%d: %s\n",t,path);

    }

    return 0;
}