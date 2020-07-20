#include <stdio.h>
#include <stdlib.h>

int powerr(int x, int y){
    int num=1, i=0;
    while(i<y){
        num*=x;
        i++;
    }
    return num;
}

int dig_counter(int x){
    int i=0;
    while(x)
    {
        i++;
        x/=10;
    }
    return i;
}

void create(int A){

    int director=0, B=0, number=0;
    int i=dig_counter(A);
    while(director<i){
        if(A%10==4){
            B+=powerr(10, director);
            number=number*10+(A%10-1);
            A/=10;
        }
        else
        {
            number=number*10+A%10;
            A/=10;
        }
        director++;
    }
    while(number){
        A=A*10+number%10;
        number/=10;
    }
    printf("%d %d\n", A, B);

}

int main()
{
    int T, i=0;
    scanf("%d", &T);
    while(i<T){
        int num;
        scanf("%d", &num);
        printf("Case #%d: ", i+1);
        create(num);
        i++;
    }
    return 0;
}
