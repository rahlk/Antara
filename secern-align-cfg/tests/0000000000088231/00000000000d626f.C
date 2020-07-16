#include <stdio.h>
#include <stdlib.h>

int doesItHaveIt(int a){
    while(a != 0) {
        if (a % 10 == 4) return 1;
        a /= 10;
    }
    return 0;
}

int main()
{
    int array[101];
    int t;
    scanf("%d",&t);
    int i,j=0,br;
    for (i = 0 ; i < t ; i++){
        scanf("%d",&br);
        array[j++] = br;
    }
    for (int i = 0 ; i < t ; i++) {
        int a = array[i];
        int b = array[i];
        for (int j = 1 ; j < b ; j++) {
            if (doesItHaveIt(j)) continue;
            if (!doesItHaveIt(a - j)) {
                printf("Case #%d: %d %d\n",i+1,a-j,j);
                break;
            }
        }
    }
    return 0;
}