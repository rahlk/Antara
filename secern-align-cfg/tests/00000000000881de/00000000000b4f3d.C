
#include <stdio.h>
#include <stdlib.h>

/*
Notes -
for F=10
test bitstring i is the ith bit of the squence 0..1023

for F=5
we just repeat 0..31 as there are only 15 broken bits 
the break in the sequence indicates the broken bits
*/
int N,B,F;

int badcount[1500];
char reply[1500];

void testcase(int casenum) {
    scanf("%d %d %d",&N, &B, &F);
    int b,i,j;
    int mask=(1<<F)-1;
    int verdict;
    for (i=0;i<N;i++) badcount[i]=0;
    for (b=0; b<F; b++) {
        for (i=0; i<N; i++) {
            putchar('0'+((i>>b) & 1));
        }
        putchar(10);
        fflush(stdout);
        scanf("%s",reply);
        for (i=0;i<N-B;i++) {
            badcount[i] |= (reply[i] & 1)<<b;
        }
    }
    badcount[N-B]=(N & mask);
    i=j=0;
    while (i<N) {
        if (badcount[j] != (i & mask)) printf("%d ",i);
        else j++;
        i++;
    }
    printf("\n");
    fflush(stdout);
    scanf("%d",&verdict);
    if (verdict!=1) exit(-1);
}

int main(int argc, char **argv) {
    int T,i;
    scanf("%d",&T);
    for (i=1;i<=T;i++)
        testcase(i);
    return 0;
}
