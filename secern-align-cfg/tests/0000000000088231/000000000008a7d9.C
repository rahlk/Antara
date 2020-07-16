
#include <stdio.h>

char foured[200];
char sum1[200];
char sum2[200];

char * noleading0(char *s) {
    while (*s=='0' && s[1]) s++;
    return s;
}

void testcase(int casenum) {
    int i,a,b,d;
    scanf("%s",foured);
    for (i=0;foured[i];i++) {
        d=foured[i]-'0';
        a=d/2;
        b=d-a;
        while (a==4 || b==4) {a++; b--;}
        sum1[i]=a+'0';
        sum2[i]=b+'0';
    }
    sum1[i]=sum2[i]=0;
    printf("Case #%d: %s %s\n",casenum, noleading0(sum1), noleading0(sum2));
}

int main(int argc, char **argv) {
    int tc,i;
    scanf("%d",&tc);
    for (i=1;i<=tc;i++) {
        testcase(i);
    }
    return 0;
}
