/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{ long n;int t;
    scanf("%d",&t);
    while(t>0)
    {
        //printf("no=");
        scanf("%ld",&n);
        int num=n,factor=0,sub=0,digit;
        double s=0.1;
         while(num != 0)
    {   
        factor++;
        digit = num % 10;
        num = num / 10;
        if(digit==4)
        {
           // printf("inside if");
          sub+=(s*pow(10,factor));
          //printf("%d %lf",sub,s);
          
        }
        
    }
        
        printf("%ld %ld",sub,n-sub);
        t--;
        
    }

    return 0;
}
