
#include <stdio.h>

int N;

void testcase(int casenum) {
    int i, c;
    printf("Case #%d: ",casenum);
    for (i=0;i<2*N-2;i++) {
        do {
            c=getchar();
        } while (!(c=='S' || c=='E'));
        putchar((c=='S') ? 'E' : 'S');
    }
    printf("\n");
}

int main(int argc, char **argv) {
    int i,tc;
    scanf("%d",&tc);
    for (i=1;i<=tc;i++) {
        scanf("%d",&N);
        testcase(i);
    }
    return 0;
}
