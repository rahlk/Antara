#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);
    char a[T][1000], N[T];
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
            int i = 1, S = 0;
            while(!(a[z][i] == 'S' && a[z][i + 1] == 'S')){
                if(a[z][i] == 'S') S++;
                i++;
            }
            for(int j = 0 ; j < 2 * N[z] - 2 ; j++){
                if(j < S + 1)b[j] = 'S';
                else if(j < N[z] + S)b[j] = 'E';
                else b[j] = 'S';
            }
        }else{
            int i = 1, E = 0;
            while(!(a[z][i] == 'E' && a[z][i + 1] == 'E')){
                if(a[z][i] == 'E') E++;
                i++;
            }
            for(int j = 0 ; j < 2 * N[z] - 2 ; j++){
                if(j < E + 1)b[j] = 'E';
                else if(j < N[z] + E)b[j] = 'S';
                else b[j] = 'E';
            }
        }
        printf("Case #%d: %s\n", z + 1, b);
        fflush(stdout);
    }

    return 0;
}