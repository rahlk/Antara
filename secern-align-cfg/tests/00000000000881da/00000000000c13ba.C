#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void solve(int n, char *s){
    int x = 0, y = 0, x2 = 0, y2 = 0;
    char *s2 = (char *)malloc(2*n-2+1);

    for(int i = 0; i < 2*n - 2; ++i){
        if( x == x2 && y == y2 ){
            if( s[i] == 'S' ){
                y++;

                s2[i] = 'E';
                x2++;
            } else {
                x++;

                s2[i] = 'S';
                y2++;
            }
        }
        else if ( x == n-1 ) {
            if (y2 < n-1){
                s2[i] = 'S';
                y2++;
            } else {
                s2[i] = 'E';
                x2++;
            }
            y++; // must be S or the test case is wrong
        }
        else if ( y == n-1 ) {
            if (x2 < n-1){
                s2[i] = 'E';
                x2++;
            } else {
                s2[i] = 'S';
                y2++;
            }
            x++; // must be E or the test case is wrong
        }
        else {
            if( x2 < x ){
                s2[i] = 'E';
                x2++;
            } else {
                s2[i] = 'S';
                y2++;
            }

            if( s[i] == 'S' ) y++;
            else x++;
        }
    }

    printf("%s\n", s2);
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

        printf("Case #%d: ");
        solve(n, s);

        free(s);
    }
    return 0;
}
