#include <stdio.h>
#include <stdint.h>

#define MIN_MAX_NUM_TEST_CASES  1
#define MAX_NUM_TEST_CASES      100

#define MIN_NUM_VALUE   1
#define MAX_NUM_VALUS   1000000000

struct result
{
    uint64_t a;
    uint64_t b;
};

uint8_t contains_4_digit(uint64_t num)
{
    while(num)
    {
        if(num % 10 == 4)
        {
            return 1;
        }
        num = num / 10;
    }

    return 0;
}

int32_t main()
{
    int32_t     err = 0;
    uint64_t    T = 0, *N = NULL, i = 0;
    struct result   *r = NULL;

    scanf("%u", &T);
    N = (uint64_t *)calloc(T, sizeof(uint64_t));
    r = (struct result *)calloc(T, sizeof(struct result));
    if(NULL == N || NULL == r)
    {
        err = -1;
        printf("\nERROR: Failed to allocate memory.\n");
        goto exit;
    }
    for(i=0; i<T; i++)
    {
        scanf("%u", &N[i]);
    }
    for(i=0; i<T; i++)
    {
        r[i].a = r[i].b = N[i]/2;
        while((r[i].a) && (r[i].b < N))
        {
            if(!contains_4_digit(r[i].a))
            {
                if(!contains_4_digit(r[i].b))
                {
                    break;
                }
            }
            r[i].a--;
            r[i].b++;
        }
        printf("Case #%u: %u %u\n", i+1, r[i].a, r[i].b);
    }
exit:
    return err;
}
