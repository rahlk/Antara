#include <stdio.h>

int main() {
    int n,A[101],B[101],j,a=0,b=0;
    char N[101];
     
    scanf("%d",&n);
    int x=n;
    while(n>0) {
        a=0,b=0;
        scanf("%s",&N[0]);
        
        for(j=0;N[j] != '\0';j++) {
            
            if(N[j] == 49) {
                A[a] = 1;a++;
            } 
            else if(N[j] == 50) {
                A[a] = 1;a++;
                B[b] = 1;b++;
            }
            else if(N[j] == 51) {
                A[a] = 1;a++;
                B[b] = 2;b++;
            }
            else if(N[j] == 52) {
                A[a] = 2;a++;
                B[b] = 2;b++;
            }
            else if(N[j] == 53) {
                A[a] = 3;a++;
                B[b] = 2;b++;
            }
            else if(N[j] == 54) {
                A[a] = 5;a++;
                B[b] = 1;b++;
            }
            else if(N[j] == 55) {
                A[a] = 5;a++;
                B[b] = 2;b++;
            }
            else if(N[j] == 56) {
                A[a] = 3;a++;
                B[b] = 5;b++;
            }
            else if(N[j] == 57) {
                A[a] = 3;a++;
                B[b] = 6;b++;
            }
            else if(N[j] == 48) {
                A[a] = 0;a++;
                B[b] = 0;b++;
            }
        }
        
        printf("Case %c%d: ",'#',x-n+1);
        for(int u=0;u<a;u++) {
            printf("%d",A[u]);
        }
        printf(" ");
        for(int v=0;v<b;v++) {
            printf("%d",B[v]);
        }
        printf("\n");
        n--;
    }
    return 0;
}
