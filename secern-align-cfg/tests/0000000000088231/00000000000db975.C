#include<stdio.h>
#include<math.h>
int main()
{
   unsigned long int input[100],num1=0,num2=0,i,temp,digit,t,j;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&input[i]);
    }
    for(j=0;j<t;j++)
    {
        temp=input[j];
        for(i=0;temp>0;i++)
    {
        digit=temp%10;
        if(digit==4)
        {
            num2=(int)pow(10,i)*1+num2;
            num1=(int)pow(10,i)*3+num1;
        }
        else
        num1=(int)pow(10,i)*digit+num1;
        temp=temp/10;
    }
        printf("Case #%lu: %lu %lu",j+1,num1,num2);
        if(j!=t-1)
        printf("\n");
    }
    return 0;
    
    
    
}