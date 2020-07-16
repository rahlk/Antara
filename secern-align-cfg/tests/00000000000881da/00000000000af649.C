#include <stdio.h>
#include<stdlib.h>

int main(){
    int iter,dim;
    scanf("%d",&iter);
    for(int count = 0; count< iter; count++){
        scanf("%d",&dim);
        char string[2*dim-2], path[2*dim-2];
        scanf("%s",string);

        for(int i=0; i< 2*dim -2 ; i++){   
           if(string[i] == 'S')
                path[i] = 'E';  
           else
                path[i] = 'S';  

        }
        printf("Case #%d: ",count+1);
        for(int j=0; j<2*dim -2; j++)
            printf("%c",path[j]);
    }
    return 0;
}