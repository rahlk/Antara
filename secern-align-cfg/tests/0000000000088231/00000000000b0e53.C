#include <stdio.h>
#include <stdlib.h>


char gIn[128];
char A[128], B[128];

int main(int argc, char* argv[]) {
    int T, i;
    scanf("%d", &T);
    for(int iT=1; iT<=T; ++iT) {
        scanf("%s", gIn);
        for(i=0; i<gIn[i]; ++i) {
            if (gIn[i] == '4') {
                A[i] = B[i] = '2';
            } else {
                A[i] = gIn[i];
                B[i] = '0';
            }
        }
        A[i] = B[i] = 0;
        for(i=0; B[i] == '0'; ++i);
        if (!B[i]) --i;
        printf("Case #%d: %s %s\n", iT, A, B+i);
    }
}
