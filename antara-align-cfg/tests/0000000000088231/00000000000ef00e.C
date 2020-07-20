#include <stdio.h>
#include <stdint.h>

#define MIN_MAX_NUM_TEST_CASES  1
#define MAX_NUM_TEST_CASES      100

#define MIN_NUM_VALUE   1
#define MAX_NUM_VALUS   1000000000

struct result
{
    uint32_t a;
    uint32_t b;
};

uint8_t contains_4_digit(uint32_t num)
{
    uint32_t temp = 0x0000000f;
    while(num)
    {
        if(num & temp == 4)
        {
            return 1;
        }
        num = num >> 1;
    }

    return 0;
}

int32_t main()
{
    int32_t     err = 0;
    uint32_t    T = 0, *N = NULL, i = 0;
    struct result   *r = NULL;

    scanf("%u", &T);
    N = (uint32_t *)calloc(T, sizeof(uint32_t));
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
        //printf("temp = %d\n", temp/2);
        r[i].a = r[i].b = N[i]/2;
        if(N[i] & 1)
        {
            r[i].a++;
        }

        //printf("Case #%u: %u %u  %d\n", i+1, r[i].a, r[i].b, N[i]);
        while((r[i].a) && (r[i].b < N[i]))
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
