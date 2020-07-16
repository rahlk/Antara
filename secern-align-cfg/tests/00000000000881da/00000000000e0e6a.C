#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);
    char a[T][50000], N[T];
    for(int z = 0 ; z < T ; z++){
        scanf("%d", &N[z]);
        scanf("%s", &a[z]);
        a[z][2 * N[z] - 2] = '\0';
    }
    for(int z = 0 ; z < T ; z++){
        char b[2 * N[z] - 1];
        b[2 * N[z] - 2] = '\0';
        if(a[z][0] == 'E') b[0] = 'S';
        else b[0] = 'E';
        for(int i = 1 ; i < 2 * N[z] - 2 ; i++){
            if(a[z][i - 1] != a[z][i]){
                if(b[i - 1] == 'E') b[i] = 'S';
                else b[i] = 'E';
            }else b[i] = b[i - 1];
        }
        printf("Case #%d: %s\n", z + 1, b);
    }
    
    return 0;
}