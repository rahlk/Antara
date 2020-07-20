#include <stdio.h>
#include <stdlib.h>

int positiveIntegerContainsDigit(long integer, long digit)
{
    while(integer > 0)
    {
        if (integer % 10 == digit)
        {
            return 1;
        }
        integer = integer / 10;
    }
    return 0;
}

void process(long input, long* a, long* b)
{
    long i = 0;
    while(i <= input/2)
    {
        if(positiveIntegerContainsDigit(i,4) || positiveIntegerContainsDigit(input-i, 4))
        {
            i++;
            continue;
        }
        *a = i;
        *b = input -i;
        return;
    }
}

int main( ) {

    char str[10000];

    fgets( str, 10000, stdin );
    int testCount = atol(str);
    //printf( "Processing %d tests\n", testCount);

    for (int i = 0; i < testCount; ++i)
    {
        fgets(str, 10000, stdin);
        long input = strtol(str, (char **)NULL, 10);
        long a,b = 0;
        process(input, &a, &b);
        printf("Case #%d: %lu %lu\r\n", i+1, a, b);
    }
    return 0;
}