/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{ long n,a[100];int t,i=0 ;
    scanf("%d",&t);
    while(i<t)
    {
        scanf("%ld",&a[i]);
        i++;
    }
    i=0;
    while(i<t)
    {
        //printf("no=");
      
        int num=a[i],factor=0,sub=0,digit;
        double s=0.1;
         while(num != 0)
    {   
        factor++;
        digit = num % 10;
        num = num / 10;
        if(digit==4)
        {
          
          sub+=(s*pow(10,factor));
          
        }
        
    }
        
        printf(" case #%d: %ld %ld \n",i+1,sub,a[i]-sub);
        i++;
        
    }

    return 0;
}
