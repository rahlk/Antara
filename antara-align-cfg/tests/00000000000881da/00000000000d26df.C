#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    int T, N, i, j;
    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%d", &N); //dimensoes
        char L[(2*N)-1];
        char y[(2*N)-1];
        scanf("%s", L);
        for(j = 0; L[j]!='\0'; j++){
      	    if(L[j] == 'S'){
      	        y[j] = 'E';
      	    }
      	    else{
      	        y[j] = 'S';
      	    }
        }
	y[j]='\0';
        printf("Case #%d: ", i+1);
	for(int k=0;k<j;k++){
		printf("%c",y[k]);
	}
	printf("\n");
    }
}
