#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash(char c) {
    return c-65;
}

int min(int n1, int n2){
    if (n1<n2)
        return n1;
    return n2;
}

int findRhymes(int n, char **stringArr, int level){
    char **hashtable[26];
    int hasharraysize[26];
    int i, h, numpairs = 0, currentpair;
    
    for (i=0; i<26; i++){
        hashtable[i] = NULL;
        hasharraysize[i]=0;
    }
    
    for (i=0; i<n; i++){
        if(strlen(stringArr[i])-level > 0) {
            h = hash(stringArr[i][strlen(stringArr[i])-1-level]);
            if (!hashtable[h]) {
                hasharraysize[h]++;
                hashtable[h] = (char **)(malloc(sizeof(char *)));
                
                *hashtable[h] =  (char *)(malloc(((strlen(stringArr[i]))+1)*sizeof(char)));
                strcpy(*hashtable[h], stringArr[i]);
                //printf("\n%s", *hashtable[h]);
            } else {
                hasharraysize[h]++;
                hashtable[h] = (char **)(realloc(hashtable[h], hasharraysize[h]*sizeof(char *)));
                
                hashtable[h][hasharraysize[h]-1] = (char *)(malloc(((strlen(stringArr[i]))+1)*sizeof(char)));
                strcpy(hashtable[h][hasharraysize[h]-1], stringArr[i]);
                //printf("\n%s", hashtable[h][hasharraysize[h]-1]);
            }
        }
    }

    for (i=0; i<26; i++){
        currentpair = 0;
        if (hasharraysize[i]>2) {
            currentpair += findRhymes(hasharraysize[i], hashtable[i], level+1);
            currentpair += 1;
        }
        if (hasharraysize[i]==2)
            currentpair = 1;
        numpairs += min(currentpair, hasharraysize[i]/2);

    } 
    
    return numpairs;
    
    
}

int main(int argc, char ** argv) {

    int t, n, i, j, numpairs;
    char **stringArr;
    char tempString[50];
    
    if(!scanf("%d\n", &t)){
        printf("Error: no input");
        return(1);
    }
    for (i=1; i<=t; i++){
        
        scanf("%d\n", &n);
        stringArr = (char **)(malloc(n*sizeof(char *)));
        
        for (j=0; j<n; j++) {
            scanf("%s\n", tempString);
            stringArr[j] = (char *)(malloc(((strlen(tempString))+1)*sizeof(char)));
            strcpy(stringArr[j], tempString);
            //printf("%s\n", stringArr[j]);
        }
        
        numpairs = findRhymes(n, stringArr, 0);
        
        printf("Case #%d: %d\n", t, numpairs*2);
        
        
        for (j=0; j<n; j++) {
            free(stringArr[j]);
        }
        free(stringArr);
    }
}