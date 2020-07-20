#include <stdio.h>
#include "string.h"
#include "stdlib.h"
#include <math.h>

void print_array(int * arr, int size);


//4564%10
int give_individual_digits(int num, int * digit_arr)
{
    while(num % 10 != 0)
    {
        *digit_arr = num%10;
        digit_arr++;
        num= num/10;
    }
}
//always returns array of two nos
int cant_print_4_give_two_nos(int num, int * arr_out)
{
    int num1=num, num2=0;
    //4816 2408---> 2000 + 400 + 8
    //4816 = 
    //2048
    //4444
    //940 = 520 420

    //divide the no by two
    //gives a and b could be equal could be not

    //even
    int digits[6];
    give_individual_digits(num, &digits[0]);
    // print_array(digits, 4);


    int count;
    for(count = 0; count < 6; count++)
    {
        if(digits[count] == 4)
        {
            num1 = num1 - 2 * pow(10, count);
            num2 = num2 + 2 * pow(10, count);
        }
        // printf("Count %d\n",digits[count]);
    }



    arr_out[0] = num1;
    arr_out[1] = num2;
    /* 4 8 1 6 = 2816 + 2*1000*/
    /* 4545 = 2525  + 2* 1000 + 2*10 */
    return (0); 
}

int main(int argc, char ** argv)
{
    int i=0;
    int num_cases=0;
    int * input = NULL;
    scanf("%d", &num_cases);
    
    input = (int *)malloc(sizeof(int)* num_cases);
    
    while(i < num_cases)
    {
        scanf("%d", &input[i]);
        i++; 
    }
    
    // print_array(input, num_cases);
    int case_count;
    for(case_count = 0; case_count < num_cases; case_count++)
    {
        int arr_out[2];
        cant_print_4_give_two_nos(input[case_count], &arr_out[0]);  
        printf("Case #%d: %d %d\n",case_count,  arr_out[0], arr_out[1]); 
    }
    
    return (0);
}


void print_array(int * arr, int size)
{
    int i=0;
    for(i=0; i< size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

