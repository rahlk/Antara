

#include <stdio.h>
#include <math.h>

unsigned int func_4_split(unsigned long long int* A,unsigned long long int* B,const unsigned long long int Ori_n);
int main()
{
    
    unsigned long long int ori_number=0;
    ori_number=4445634;
    unsigned int test_case=0;
    unsigned long long int A_n=ori_number;
    unsigned long long int B_n=0;
    unsigned long long int* A=&A_n;
    unsigned long long int* B=&B_n;
    test_case=func_4_split(A,B,ori_number);
    printf("%u \t",ori_number);
    printf("#Case  %u", test_case);
    printf("\t");
    printf(" %u\t",*A);
    printf(" %u\t\n ",*B);
    
    ori_number=4544;
    A_n=ori_number;
    B_n=0;
    test_case=func_4_split(A,B,ori_number);
    printf("%u \t",ori_number);
    printf("#Case  %u", test_case);
    printf("\t");
    printf(" %u \t",*A);
    printf(" %u \t ",*B);
    
}
unsigned int func_4_split(unsigned long long int* A,unsigned long long int* B, const unsigned long long int Ori_n)
{
    static unsigned int test_cases=0;
    test_cases=test_cases+1;
    unsigned long long int div_number=Ori_n;
    unsigned int place_digit_value=0;
    
    while(div_number)
    {
    
    unsigned int mod_number=0;
    mod_number=div_number%10;
    div_number=div_number/10;
   
    
    if (mod_number==4)
    {
    
        *A=*A-pow(10,place_digit_value);
        *B=*B+pow(10,place_digit_value);
        
    }
    place_digit_value=place_digit_value+1;
    }
    return test_cases;
   
    
}
