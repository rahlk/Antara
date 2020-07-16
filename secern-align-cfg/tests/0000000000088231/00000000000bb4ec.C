#include <stdio.h>

int isGood(int a, int b){
    while(a > 0){
        if(a % 10 == 4)
            return false;
        else
            a = a / 10;
    }
    while(b > 0){
        if(b % 10 == 4)
            return false;
        else
            b = b / 10;
    }
    return true;
}

int main()
{
    int tc, i, n;
    scanf("%d", &tc);
    for(i = 1; i <= tc; i++){
        scanf("%d", &n);
        int j = 1, k = n-j;
        while(true){
            if(isGood(j, k))
                break;
            else{
                j++;
                k--;
            }
        }
        printf("Case #%d: %d %d\n", i, j, k);
    }
}