#include<stdio.h>

int pass(long int num)
{
    while(num>0)
    {
        if (num%10 == 4)
            return 0;
        else 
            num /= 10;
    }
    return 1;
}


int main()
{
    long int test;
    scanf("%ld",&test);
    
    for(long i=0;i<test;i++)
    {
        long int num;
        scanf("%ld",&num);
        
        long oth = 1;
        num--;
        
        while(pass(num) != 1 || pass(oth) != 1)
        {
            num--;
            oth++;
        }
        
        printf("Case #%ld: %ld %ld\n",i+1,num,oth);
    }
}