#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char* argv[]) {
    // Read test case
    int t;
    scanf("%d", &t);

    int i;
    for (i=1; i<=t; i++) {
        // Read n
        // int n;
        // scanf("%d", &n);

        // Convert int to string
        char a[1000];
        char b[1000];
        scanf("%s", a);

        // If there is a 4 then -1 else keep other numbers same
        // Array one will have same numbers + 4-1 and other arrays will have 0+1 and 0s
        // Loop for 4s
        int update_b = 0;
        int counter_a = 0;
        int counter_b = 0;
        while (a[counter_a] != '\0') {
            // If havent reach the first 4, then dont add for b yet
            if (!update_b && a[counter_a] == '4') {
                update_b = 1;
                a[counter_a] = '3';
                b[counter_b] = '1';
                counter_b++;
            } else if (update_b && a[counter_a] == '4') {
                a[counter_a] = '3';
                b[counter_b] = '1';
                counter_b++;
            } else if (update_b) {
                b[counter_b] = '0';
                counter_b++;
            }

            // Else case is for not update b and the a is not at 4 so proceed
            // and dont do anything

            counter_a++;
        }
        if (counter_b == 0) {
            b[counter_b] = '1';
            
            counter_a--;

            // If the last digit is a 0 then -1 and -1 for every other until it is no longer
            // a 0
            if (a[counter_a] == '0') {
                while (a[counter_a] == '0') {
                    a[counter_a] = '9';
                    counter_a--;
                }

                a[counter_a] -= 1;

            } else {
                a[counter_a] -= 1;
            }

            counter_b++;
        }
        b[counter_b] = '\0';

        // Now print the output
        printf("Case #%d: %s %s\n", i, a, b);
        fflush(stdout);
    }

    return 0;
}