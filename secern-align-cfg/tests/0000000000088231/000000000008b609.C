#include<stdio.h>

void main()
{
        int a,b,n,sum;
        clrscr();
    printf("\n enter a value\n");
    scanf("%d",&a);
    printf("\n enter b value\n");
    scanf("%d",&b);
    sum=a+b;
    printf("\n sum of a and b is %d");
    scanf("%d",&a+b);
         if(sum==4)
         {
           printf("\nyou have entered an invalid numbers");
           scanf("%d",&sum);
         
           else
           printf("\n you had entered a valid number\n");
          
         return 0;
         }
    }
}
