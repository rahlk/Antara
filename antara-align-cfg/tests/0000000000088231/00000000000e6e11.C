#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ long long int N,A,B ;
int T ;

scanf("%d",&T);
int count = 1 ;
while(count<=T)
    {
        scanf("%lld",&N) ;
        long long int temp,num=0,var=0 ,vary = N ;
        while(N!=0)
        {
            temp = N%10;
             
            if(temp==4)
                temp = 3 ;
            num = temp*pow(10,var) + num; 
            var++ ;
            N=N/10 ;
        }
        A = num ;
        B = vary-A ;
        
        printf("Case #%d: %lld %lld",count,A,B) ;
        count++ ;
        printf("\n") ;
    }
}