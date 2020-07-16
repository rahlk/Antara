#import <math.h>


int main(int argc, char argv[]){
    int T;
    scanf("%d",&T);
    int n,A,B;
    int j;
    for (int i = 1; i<=T; i++){
        scanf("%d", &n);
        A = 0;
        B = 0;
        j = 0;
        while (n != 0){
            if (n % 10 == 4){
                A = A + 3 * pow(10,j);
                B = B + 1 * pow(10,j);
            } else {
                A = A + (n % 10) * pow(10,j);
            }
            n = n / 10;
            j ++;  
        }
        printf(" Case #%d: %d %d \n", i, A, B);
    }
}