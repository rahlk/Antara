#include<stdio.h>
int main(){
    int test = 0;
    // printf("Enter the number of test: ");
    scanf("%d",&test);
    int hasfour(int num){
        while(num > 0){
            int digit = num % 10;
            num = num / 10;
            if(digit == 4){
                return 1;
                break;
            }
        }
    }
    void splitnum(int num, int* b, int* c){
        int b1 = num * 0.9;
        int c1 = num - b1;  
        while(hasfour(b1) || hasfour(c1) == 1){
            b1 = b1 + 1;
            c1 = c1 - 1;
        }
        *b = b1;
        *c = c1;
        // printf("%d,%d",b,c);
    }
    for(int i=0;i<test;i++){
        int n = 0;
        int b,c;
        // printf("Enter a number: ");
        scanf("%d",&n);
        // int res = hasfour(n);
        // printf("%d",res);
        splitnum(n, &b, &c);
        printf("Case #%d: ",i);
        printf("%d %d",b,c);
    }
}