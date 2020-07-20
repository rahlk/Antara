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
        if(a[z][0] == 'E' && a[z][2 * N[z] - 3] == 'S'){
            for(int i = 0 ; i < 2 * N[z] - 2 ; i++){
                if(i < N[z] - 1)b[i] = 'S';
                else b[i] = 'E';
            }
        }else if(a[z][0] == 'S' && a[z][2 * N[z] - 3] == 'E'){
            for(int i = 0 ; i < 2 * N[z] - 2 ; i++){
                if(i < N[z] - 1)b[i] = 'E';
                else b[i] = 'S';
            }
        }else if(a[z][0] == 'E' && a[z][2 * N[z] - 3] == 'E'){
            int i = 0, S = 0;
            while(!(a[z][i] == 'S' && a[z][i + 1] == 'S')){
                if(a[z][i] == 'S') S++;
                i++;
            }
            for(int i = 0 ; i < 2 * N[z] - 2 ; i++){
                if(i < S + 1)b[i] = 'S';
                else if(i < N[z] + S)b[i] = 'E';
                else b[i] = 'S';
            }
        }else{
            int i = 0, E = 0;
            while(!(a[z][i] == 'E' && a[z][i + 1] == 'E')){
                if(a[z][i] == 'E') E++;
                i++;
            }
            for(int i = 0 ; i < 2 * N[z] - 2 ; i++){
                if(i < E + 1)b[i] = 'E';
                else if(i < N[z] + E)b[i] = 'S';
                else b[i] = 'E';
            }
        }
        printf("Case #%d: %s\n", z + 1, b);
    }

    return 0;
}