#include <stdio.h>

int main() {
    int Testcases, i, k;
    char Ncoins;
    char Asol[100], Bsol[100];
    int acnt, bcnt;
    
    scanf("%d", &Testcases);
    scanf("%c", &Ncoins); //prepare to read next line (burn new line character)
    for (i=0; i<Testcases; i++) {
        acnt = -1;
        bcnt = -1;
        
        while ((scanf("%c", &Ncoins) > 0) && (Ncoins != '\n')) { 
            //Ncoins is the current digit
            if (Ncoins == '4') {
                acnt++;
                Asol[acnt] = '3';
                bcnt++;
                Bsol[bcnt] = '1';
            }
            else {  //when the current digit is not 4
                acnt++;
                Asol[acnt] = Ncoins;
                if (bcnt != -1) {
                    bcnt++;
                    Bsol[bcnt] = '0';
                }
            }
        }    // basically we make the numbers xx3xx... and 100...
        
        printf("Case #%d: ", (i+1));
        for (k=0; k<=acnt; k++) {
            printf("%c", Asol[k]);
        }
        printf(" ");
        for (k=0; k<=bcnt; k++) {
            printf("%c", Bsol[k]);
        }
        printf("\n");
        
    }
    return 0;
}