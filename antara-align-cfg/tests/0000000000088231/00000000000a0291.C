#include<stdio.h>
int main()
{
    short int Test ;
    short int rem ;
    long long int N ;
    long long int a,b,mult ;
    scanf("%hd",&Test) ;
    short int Test_loop = 1 ;
    
    for(;Test_loop<=Test;++Test_loop)
    {
        a=0 ;
        b=0 ;
        scanf("%lld",&N) ;
        mult = 1 ;
        while(N>0)
        {
            rem = N%10 ;
            
            if(rem==4)
            {
                a = a + 1*mult ;
                b =  b + 3*mult ;
            }
            else
            {
                a = a + rem*mult ;
            }
            
            mult = mult * 10 ;
            
            N = N/10 ;
        }
        
        printf("Case #%d: %lld %lld\n",Test_loop,a,b)  ;
        
    }
}
