
#include <stdio.h>
#include <stdlib.h>

char rangers[120][6];

char solution[6];

int T,F;

#define RANGERS 5
#define SETS 120

//#define RANGERS 3
//#define SETS 6

void clearstuff(void) {
    int i,j;
    for (i=0;i<120;i++) {
        for (j=0;j<6;j++) rangers[i][j]=0;
    }
    for (i=0;i<6;i++) solution[i]=0;
}

int startswith(char *s, char *key) {
    int i=0;
    while (key[i] && s[i]==key[i]) i++;
    return (key[i]==0);
}

void solve(void) {
    int i=0,j,k=0;
    int tally[5];
    char answer[20];
    clearstuff();
    j=0;
    while (1) {
        for (i=0;i<RANGERS;i++) tally[i]=0;
        for (i=0;solution[i];i++) tally[solution[i]-'A']=-1;
        for (i=0;i<SETS-1;i++) {
            if (startswith(rangers[i],solution)) {
                printf("%d\n",i*RANGERS+j+1);
                fflush(stdout);
                scanf("%s",answer);
                rangers[i][j]=answer[0];
                tally[answer[0]-'A']++;
            }
        }
        i=0;
        while (tally[i]==-1) i++;
        k=i+1;
        while (tally[k]==-1 || tally[k]==tally[i]) k++;
        if (tally[k]<tally[i]) solution[j]='A'+k;
        else solution[j]='A'+i;
        j++;
        if (j==RANGERS-1) break;
    }
    if (tally[k]>tally[i]) solution[j]='A'+k;
    else solution[j]='A'+i;
    printf("%s\n",solution);
    fflush(stdout);
    scanf("%s",answer);
    if (answer[0]=='N') exit(-1);
}

int main(int argc, char **argv) {
    int i;
    scanf("%d %d", &T, &F);
    for (i=1;i<=T;i++) {
        solve();
    }
    return 0;
}
