#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {

    int cases;

    scanf("%i", &cases);


    int arr[cases];


    for (int i = 0; i < cases; i++) {

        scanf("%i", &arr[i]);

    }


    for (int i = 0; i < cases; i++) {

        int a = arr[i];
        int b = 0;
        int length = (int)floor(log10(arr[i])) + 1;
        char x[length];
        int n = 0;
        do {
            x[n] = arr[i] % 10;
            arr[i] /= 10;
            n++;
        } while (arr[i] != 0);


        for (int j = 0; j < length; j++) {

            if ((int)x[j] == 4) {

                a -= pow(10,(length - 1 - j));

                b += pow(10, (length - 1 - j));

            }

        }


        printf("Case #%i: %i %i\n", i + 1, a, b);

    }



    return 0;
}
