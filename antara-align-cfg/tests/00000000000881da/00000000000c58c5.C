#include <stdio.h>
#include <string.h>

#define SIZE 50000

int main(){
    char lydia[SIZE],me[SIZE];
    int T,t,n;
    
    scanf("%d",&T);

    for(int t = 1 ; t  <= T ; t++){
        scanf("%d",&n);
        scanf("%s",lydia);

        for(int i = 0 ; i < strlen(lydia); i++)
            me[i] = lydia[i] == 'S' ? 'E' : 'S';    
        
        printf("Case #%d: %s\n",t,me);

    }

    return 0;
}