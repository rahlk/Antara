#include <stdio.h>
int i, number1, number2, j,decimal_base=1, digit;
int test_case_number, test_case=1;

int get_int_len (int value){
  int l=1;
  while(value>9){ l++; value/=10; }
  return l;
}
int number_divider()
{
    int number_length = get_int_len(number1);
    int number2 = 0,decimal_base=1;
    while(number_length--)
    {
        digit = (number1/decimal_base)%10;
        if (digit == 4)
        {
            number1 -= decimal_base;
            number2 += decimal_base;
        }
        decimal_base*=10;
    }
    printf("Case #%d: %d %d\n", test_case, number1, number2);
    return 0;
}


/*
int number_divider(char *a[])
{
    while('\n' != (char)a[i])
    {
        if (a[i] == '4')
        {
            a[i] = (char) 3;
            number2 += decimal_base;
        }
        decimal_base*=10;
        i++;

    }
    i=0;
    return 0;
}
*/
int main()
{
    scanf("%d", &test_case_number);
    while(test_case <= test_case_number)
    {
        scanf("%d",&number1);
        number_divider();
        test_case++;
    }
    return 0;
}
