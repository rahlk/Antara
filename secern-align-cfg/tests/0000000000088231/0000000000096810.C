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
        char buffer[1000];
        char a[1000];
        char b[1000];
        scanf("%s", buffer);

        // If there is a 4 then -1 else keep other numbers same
        // Array one will have same numbers + 4-1 and other arrays will have 0+1 and 0s
        // Loop for 4s
        int update_b = 0;
        int counter_buffer = 0;
        int counter_b = 0;
        while (buffer[counter_buffer] != '\0') {
            // If havent reach the first 4, then dont add for b yet
            if (!update_b && buffer[counter_buffer] == '4') {
                update_b = 1;
                buffer[counter_buffer] = '3';
                b[counter_b] = '1';
                counter_b++;
            } else if (update_b && buffer[counter_buffer] == '4') {
                buffer[counter_buffer] = '3';
                b[counter_b] = '1';
                counter_b++;
            } else if (update_b) {
                b[counter_b] = '0';
                counter_b++;
            }

            // Else case is for not update b and the a is not at 4 so proceed
            // and dont do anything

            counter_buffer++;
        }
        if (counter_b == 0) {
            b[counter_b] = '1';
            
            counter_buffer--;

            // If the last digit is a 0 then -1 and -1 for every other until it is no longer
            // a 0
            if (buffer[counter_buffer] == '0') {
                while (buffer[counter_buffer] == '0') {
                    buffer[counter_buffer] = '9';
                    counter_buffer--;
                }

                buffer[counter_buffer] -= 1;

            } else {
                buffer[counter_buffer] -= 1;
            }

            counter_b++;
        }
        b[counter_b] = '\0';

        // Now remove leading zeros from a
        counter_buffer = 0;
        while (buffer[counter_buffer] == '0') {
            counter_buffer++;
        }

        // Copy the remaining string
        strcpy(a, buffer+counter_buffer);

        // Now print the output

        printf("Case #%d: %s %s\n", i, a, b);
        fflush(stdout);
    }

    return 0;
}