#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int T, t, N, i, j, x, y, xoff, yoff, pl, consequentfound, k;
    char percorsoA[50000], percorsoB[50000];
    int lastc, firstc;
    
    scanf("%d", &T);
    
    for(t=1; t<=T; t++){
        scanf("%d", &N);
        scanf("%s", percorsoA);
        pl = 2*N-2;
        x=0, y=0, xoff=0, yoff=0;
        
        for(i=0; i<pl; i++){
            lastc=i;
            firstc=i;
            consequentfound=0;
            for(j=i; j<pl && !consequentfound; j++){
                if(percorsoA[j]!=percorsoA[lastc]){
                    lastc=i;        //dove inizia la seconda sottosequenza es EESSS dove inizia SSS
                    if(percorsoA[j]==percorsoA[firstc] || percorsoA[j+1]=='\0')
                        consequentfound=1;
                }
                if (percorsoA[j]=='E'){
                    xoff++;
                } else {
                    yoff++;
                }
            }
            
            if(percorsoA[i]=='E' && (y+xoff>=N || x+yoff>=N)){ //devo guardare i movimenti miei a SUD
                for(k=i; k<yoff; k++)
                    percorsoB[k]='S';
                while(k<xoff) percorsoB[k++]='E';
            } else if(percorsoA[i]=='S' && (x+xoff>=N || y+yoff>=N)){
                for(k=i; k<yoff; k++)
                    percorsoB[k]='E';
                while(k<xoff) percorsoB[k++]='S';
            } else {    //puoi copiare i movimenti invertendo soltanto
                for(k=i; k<j; k++){
                    percorsoB[k] = percorsoA[k] == 'S' ? 'E' : 'S';
                }
            }
                
            i=j;
        }
        
        printf("Case %d: %s\n", t, percorsoB);
    }
}
