#include <iostream>

int ch1[50050],ch2[50050];



int main(){
    int T;
    scanf("%d\n",&T);
    for (int TT=1;TT<=T;TT++){
        printf("Case #%d: ", TT);
        int n;
        scanf("%d\n",&n);
        int p = 1;
        while (n){
            if (n%10 == 4){
                ch1[p] = 2;
                ch2[p++] = 2;
            } else {
                ch1[p] = n%10;
                ch2[p++] = 0;
            }
            n/=10;
        }
        p--;
        for (int i=p;i>0;i--) printf("%d",ch1[i]);
        printf(" ");
        while (ch2[p] == 0) p--;
        for (int i=p;i>0;i--) printf("%d",ch2[i]);
        printf("\n");
    }
}