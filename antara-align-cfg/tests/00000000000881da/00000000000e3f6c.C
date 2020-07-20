#include <stdio.h>
#include <stdlib.h>

void printCaseAnswer(char * path, int caseNumber){
    printf("Case #%d: %s\n", caseNumber, path);
}

void invertPath(char * myPath, char * opponentPath, int size){
    for(int i = 0; i < size; i++){
        if(opponentPath[i] == 'E')
            myPath[i] = 'S';
        else
            myPath[i] = 'E';
    }
}

int main(){
    int numberCases = 0;
    scanf("%d", &numberCases);
    
    for(int i = 0; i < numberCases; i++){
        int tableSize = 0, pathSize = 0;
        scanf("%d", &tableSize);
        pathSize = 2*(tableSize-1);
        
        char * opponentPath = (char *) malloc(pathSize+1*sizeof(char));
        char * myPath = (char *) malloc(pathSize+1*sizeof(char));
        
        scanf("%s", opponentPath);
        
        invertPath(myPath, opponentPath, pathSize);
        
        printCaseAnswer(myPath, i+1);
        
        free(opponentPath);
        free(myPath);
    }
    
    return 0;
}