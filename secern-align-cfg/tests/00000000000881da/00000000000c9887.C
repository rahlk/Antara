#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    
    int t, i, n, j;
    char *llpath;
    char *mypath;

    if(!scanf("%d\n", &t)){
        printf("Error: no input");
        return(1);
    }
    
    for (i=1; i<=t; i++) {
        scanf("%d\n", &n);
        if((llpath = (char *)malloc(sizeof(char)*(2*n-2)))==NULL){
            printf("Error: couldn't allocate memory\n");
            return(1);
        }
        if((mypath = (char *)malloc(sizeof(char)*(2*n-1)))==NULL){
            printf("Error: couldn't allocate memory\n");
            return(1);
        }
        for (j=0; j< 2*n-2; j++){
            llpath[j] = getchar();
            if (llpath[j]=='S')
                mypath[j]='E';
            else
                mypath[j]='S';
        }
        mypath[j]='\0';
        getchar();
        printf("Case #%d: %s\n", i, mypath);
        free(llpath);
        free(mypath);
    }
    
}