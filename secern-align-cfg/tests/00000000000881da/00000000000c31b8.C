#include <stdio.h>
#include <string.h>

unsigned T;
unsigned long N;

int main()
{
    unsigned i;
    unsigned long j;
    char c;

    scanf ("%u", &T);

    for (i = 0; i < T; i++) {
        scanf ("%lu\n", &N);
        printf ("Case #%u: ", i+1);
        for (j = 1; j <= (N-1)+(N-1); j++) {
            scanf("%c", &c);
            if (c == 'S')
                printf ("E");
            else
                printf ("S");
        }
        printf ("\n");
    }
    return 0;
}
