/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv) {

    int t, a, i, j, k, nummoves, impossible;
    char moves[501];
    int rock[500] = {1}, paper[500] = {1}, scissors[500] = {1};
    
    scanf("%d\n", &t);
    
    for (i=1; i<=t; i++){
        impossible = 0;
        for (j=0; j<500;j++){
            rock[j]=1;
            scissors[j]=1;
            paper[j]=1;
        }
        scanf("%d\n", &a);
    
        for (j=0; j<a; j++){
            
            scanf("%s\n", &moves);
            if(impossible)
                continue;

            nummoves = strlen(moves);
            for (k=0; k<500; k++){
                if (moves[k%nummoves]=='R')
                    scissors[k]=0;
                if (moves[k%nummoves]=='S')
                    paper[k]=0;
                if (moves[k%nummoves]=='P')
                    rock[k]=0;
                if(!rock[k]&&!scissors[k]&&!paper[k]){
                    impossible = 1;
                    break;
                }
            }
        }
        if (impossible)
            printf("Case #%d: IMPOSSIBLE\n", i);
        else {
            printf("Case #%d: ", i);
            for (k=0; k<500; k++) {
                if (rock[k])
                    printf("R");
                else if (paper[k])
                    printf("P");
                else
                    printf("S");
            }
            printf("\n");
        }
    }
    return 0;
}
