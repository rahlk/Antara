#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Solve case
void solve(int tc, int d, char lydia[]) {
    int i;

    printf("Case #%d: ", tc);
    for (i = 0; i < (2*d)-2; i++) {
        printf("%c", (lydia[i] == 'E')? 'S': 'E');
    }
    printf("\n");
}

// Read input
int main(int argc, char *argv[]) {
    int t; // Number of test cases
    int d; // Dimensions
    char lydia[100000]; // buffer for the given solution

    int i;

    scanf("%d", &t);

    for (i = 0; i < t; i++){
        scanf("%d", &d);
        scanf("%s", lydia);

        solve(i+1, d, lydia);
    }

    return 0;
}
