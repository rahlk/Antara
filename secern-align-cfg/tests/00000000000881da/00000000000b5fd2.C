#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char* argv[]) {
    int t;
    scanf("%d", &t);

    int i;
    for (i=1; i<=t; i++) {
        int dimension;
        scanf("%d", &dimension);

        char *lydias_path = (char*) malloc((2 * dimension - 1) * sizeof(char));
        char *my_path = (char*) malloc((2 * dimension - 1) * sizeof(char));

        scanf("%s", lydias_path);

        // Go through lydia's path and reverse the input
        int c = 0;
        while (lydias_path[c] != '\0') {
            if (lydias_path[c] == 'E') { 
                my_path[c] = 'S';
            } else {
                my_path[c] = 'E';
            }
            c++;
        }

        printf("Case #%d: %s\n", i, my_path);
    }

    return 0;
}