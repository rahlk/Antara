#include <stdio.h>
#include <math.h>

//a = (int)(pow(5, 2) + 0.5);

int digit(int n, int th){
    return ((n)/((int)(pow(10, th) + 0.5)))%10;
    //int div = (int)(pow(10, th) + 0.5);
    //return (123456/div)%10;
}

void extractDigits(unsigned int num)
{
    int len = 0, div = 1;
    int tempnum = num;

    while(num / div != 0){
        ++len;
        div *= 10;
    }
    //printf("%d", len);
    for(int i=0;i<len;++i){
        if((digit(num, i) == 4))
            tempnum -= (2 * (int)(pow(10,i)+0.5));
        else continue;
    }
    int num2 = num - tempnum;
    //printf("%d", digit(214233,5));
    printf("%d %d", tempnum, num2);
}


int main(){
    int T;
    scanf("%d", &T);
    for(int i=1;i<=T;++i){
        int N;
        scanf("%d", &N);
        printf("Case #%d: ", i);
        extractDigits(N);
    }

}