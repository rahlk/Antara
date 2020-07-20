#include <stdio.h>
#include <stdlib.h>

char A[50000 + 8];
int N;

int main(int argc, char* argv[]) {
    int T, iT, i, k, c, s, e;
    scanf("%d", &T);
    for(iT=1; iT<=T; ++iT) {
        scanf("%d%s", &N, A);
        printf("Case #%d: ", iT);
        for(s=e=k=0; A[k]; ++k) {
            if (s == 0 && e == 0) c = A[k];
            if (A[k] == 'S') {
                ++s;
            } else {
                ++e;
            }
            if (s == e) {
                c = (c == 'S' ? 'E' : 'S');
                for(i=0; i<s; ++i) printf("%c", c);
                c = (c == 'S' ? 'E' : 'S');
                for(i=0; i<s; ++i) printf("%c", c);
                s = e = 0;
            }
        }
        printf("\n");
    }
}
