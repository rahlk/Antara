#include <stdio.h>

int is4(int num)
{
    int digit = 0;
    while(num>0)
    {
        digit = num%10;
        if(digit==4)
        {
            return 1;
        }
        num = num/10;

    }
    return 0;
}

void from0(int test, int inp)
{
    int a = 1;
    int b = inp-1;

    while(1)
    {
        if((is4(a)==0) && (is4(b)==0))
        {
            break;
        }
        else
        {
            a = a + 1;
            b = b - 1; 
        }
        
    }
    printf("Case #%d: %d %d\n", test, a, b);
}

int main()
{
    int test, inp, i=0;
    scanf("%d", &test);
    while(test!=i)
    {
        inp = 0;
        scanf("%d", &inp);
        from0(i+1, inp);
        i++;
    }
}