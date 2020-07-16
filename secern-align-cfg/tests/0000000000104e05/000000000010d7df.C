
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
6 N!
1000 N^3
     N^2LogN 
 */

int N;

char *list[1010];
int accent[1010];
int matchcount;

void reverse(char *s) {
    int i,j;
    char t;
    i=0;
    j=strlen(s)-1;
    while (i<j) {
        t=s[i];s[i]=s[j];s[j]=t;
        i++;
        j--;
    }
    return;
}

void readstuff(void) {
    int i;
    char buf[55];
    scanf("%d",&N);
    for (i=0;i<N;i++) {
        scanf("%s",buf);
        reverse(buf);
        list[i]=strdup(buf);
    }
}

void freestuff(void) {
    int i;
    for (i=0;i<N;i++) {
        free(list[i]);
        list[i]=NULL;
        accent[i]=1;
    }
}

int increment(void) {
    int i;
    while (1) {
        if (i>N) return 0;
        if (accent[i]<N) {
            accent[i]++;
            return 1;
        } else {
            accent[i]=1;
            i++;
        }
    }
}

int equals(char *a, char *b, int n) {
    int i;
    for (i=0;i<n;i++)
        if (a[i]!=b[i]) return 0;
    return 1;
}

void matches(void) {
    int i,j;
    int mc=0,m;
    for (i=0;i<N;i++) {
        m=0;
        if (accent[i]>strlen(list[i])) return;
        for (j=0;j<N;j++) {
            if (accent[i]!=accent[j]) continue;
            if (accent[j]>strlen(list[j])) return;
            if (i==j) continue;
            if (equals(list[i], list[j],accent[i])) m++;
        }
        if (m>1) return;
        mc+=m;
    }
    //mc=mc/2;
    if (mc>matchcount) matchcount=mc;
}

void testcase(int casenum) {
    readstuff();
    matchcount=0;
    do {
        matches();
    } while (increment());
    freestuff();
    printf("Case #%d: %d\n",casenum, matchcount);
}

int main(int argc, char **argv) {
    int i,tc;
    scanf("%d",&tc);
    for (i=1;i<=tc;i++) {
        testcase(i);
    }
    
    return 0;
}
