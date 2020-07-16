#include <stdio.h>
#include <stdlib.h>

int main(){
    int casosDeTeste;
    
    scanf("%d ", &casosDeTeste);

    for(int i=0; i < casosDeTeste; i++){
        printf("Case #%d: ", i+1);
		
		int tamanhoDoLabirinto;
		
		scanf("%d ", &tamanhoDoLabirinto);
		
		for(int j=0; j< 2*tamanhoDoLabirinto-2; j++){
			
			char passo;
			
			scanf(" %c", &passo);
			
			if(passo == 'E'){
				printf("S");
			}else{
				printf("E");
			}
		}
		
		printf("\n");
    }
    
    return 0;
}