#include<stdio.h>
#include<stdlib.h>
int check(long long int x)
{
    long long int dig;
    while(x>0)
    {
        dig=x%10;
        if(dig==4)
        return 0;
        x/=10;
    }
    return 1;
}
void main()
{
    int T,i;
    long long int temp;
    scanf("%d",&T);
    if(T>100 || T<1)
    {
        printf("Invalid number of testcases");
        return;
    }
    
   long long int *val=(long long int *)malloc(T*sizeof(long long int));
    for(i=0;i<T;i++)
   {
     scanf("%lld",(val+i));
     if(check(*(val+i))==1 || *(val+i)<1)
     {
         printf("Atleast 1 digit must be a 4");
         return;
     }
    }
    for(i=0;i<T;i++)
    {
        temp=1;
        while(1)
        {
        if(check(*(val+i)-temp)==1 && check(temp)==1)
        {
        printf("Case #%d: %lld %lld\n",(i+1),temp,(*(val+i)-temp));
        break;
            
        }
        temp++;
        }
    }
    free (val);
}