#include <stdio.h>

int main(){
    
    int N;
    int tmp;
    char ch[2000];
    scanf("%d",&N);
    int i;
    for(i=0; i<N; i++){
        printf("Case #%d: ",i);
        scanf("%d",&tmp);
        scanf("%s",ch);
        int j=0;
        while(ch[j] != '\0'){
            if(ch[j] == 'S')
                printf("E ");
            else
                printf("S ");
                
            j++;
            
        }
        printf("\n");
    }
    
    return 0;
}