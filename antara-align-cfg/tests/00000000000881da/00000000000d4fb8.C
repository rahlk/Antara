#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void solve(int t, int n, char *s){
    char *s2 = (char *)malloc(2*n-2+1);
    int aimfortop = s[2*n-2-1] == 'E' ? 1 : 0;
    int start_top = s[0] == 'S' ? 1 : 0;

    char c = aimfortop ? 'S' : 'E'; // starting direction
    char c_inv = aimfortop ? 'E' : 'S';

    int i,j;
    int cross = 0;


    if(aimfortop != start_top){ // we need to cross Lydia once
        i = 0;
        cross = 1;
        while(!(s[i] == s[i+1] && s[i] == c) && i < n-2){
            if(s[i] == c)
                cross++;

            i++;
        }
    }

    // We know where to cross Lydia
    j = 0;
    for(i = 0; i<cross; ++i)
        s2[j++] = c;
    for(i = 0; i<n-1; ++i)
        s2[j++] = c_inv;
    for(i = cross; i<n-1; ++i)
        s2[j++] = c;

    s2[j++] = 0;

    printf("Case #%d: %s\n", t, s2);
    free(s2);
}

int main(int argc, char const *argv[])
{
    int t;
    int n;
    char *s = NULL;
    scanf("%d\n", &t);
    for(int i = 0; i < t; ++i){
        scanf("%d\n", &n);

        s = (char *)malloc(2*n);
        scanf("%s\n", s);
        s[2*n-2] = 0;

        solve(i+1, n, s);

        free(s);
    }
    return 0;
}
