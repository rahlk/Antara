#include <stdio.h>
#include <math.h>
int main()
{
    
    unsigned long long int ori_number=0;
    printf ("Enter the original number \n");
    scanf ("%u",&ori_number);
    unsigned long long int A=ori_number;
    unsigned long long int B=0;
    unsigned long long int div_number=ori_number;
    unsigned int place_digit_value=0;
   
    
    A=ori_number;
    div_number=A;
    
    while(div_number)
    {
    
    unsigned int mod_number=0;
    mod_number=div_number%10;
    div_number=div_number/10;
   
    
    if (mod_number==4)
    {
    
        A=A-pow(10,place_digit_value);
        B=B+pow(10,place_digit_value);
        
    }
    place_digit_value=place_digit_value+1;
    }
    
    printf("First Number = %u \n",A);
    printf("Second Number = %u \n",B);
    
}