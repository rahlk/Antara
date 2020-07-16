#include <stdio.h>
#include <math.h>
int VariableA(int N){
    int new=0;
    int value = N;int x=0;
    while (value > 0) {
        int digit = value % 10;
        if(digit==4){new+=pow(10,x);}
        x++;
        value /= 10;
    } return new;
}
int main(int argc, char *argv[]) {
    int N,T,B,A,y;
    scanf("%d",&T);
    for(y=1;y<=T;y++){
        scanf("%d",&N);
        A=VariableA(N);
        B=N-A;
        printf("Case #%d: %d %d\n",y,A,B);
    }
    return 0;
}