#include <stdio.h>

#define MAX 101

int main() {
    int n,j,a=0,b=0;
    char N[MAX][MAX],A[MAX][MAX],B[MAX][MAX];
     
    scanf("%d",&n);
    
    for(int z=0;z<n;z++) {
        scanf("%s",&N[z][0]);
    }
    
    for(int z=0;z<n;z++) {
        a=0;b=0;
       
        for(j=0;N[z][j] != '\0';j++) {            
            if(N[z][j] == 49) {
                A[z][a] = '1';a++;
            } 
            else if(N[z][j] == 50) {
                A[z][a] = '1';a++;
                B[z][b] = '1';b++;
            }
            else if(N[z][j] == 51) {
                A[z][a] = '1';a++;
                B[z][b] = '2';b++;
            }
            else if(N[z][j] == 52) {
                A[z][a] = '2';a++;
                B[z][b] = '2';b++;
            }
            else if(N[z][j] == 53) {
                A[z][a] = '3';a++;
                B[z][b] = '2';b++;
            }
            else if(N[z][j] == 54) {
                A[z][a] = '5';a++;
                B[z][b] = '1';b++;
            }
            else if(N[z][j] == 55) {
                A[z][a] = '5';a++;
                B[z][b] = '2';b++;
            }
            else if(N[z][j] == 56) {
                A[z][a] = '3';a++;
                B[z][b] = '5';b++;
            }
            else if(N[z][j] == 57) {
                A[z][a] = '3';a++;
                B[z][b] = '6';b++;
            }
            else if(N[z][j] == 48) {
                A[z][a] = '0';a++;
                B[z][b] = '0';b++;
            }
        }
        A[z][a] = '\0';
        B[z][b] = '\0';
    }    
        for(int z=0;z<n;z++) {
            printf("Case %c%d: ",'#',z+1);
            printf("%s %s\n",A[z],B[z]);
        }
        printf("\n");
        n--;
    return 0;
}
