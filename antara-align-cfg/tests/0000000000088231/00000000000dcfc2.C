#include <stdio.h>

int main()
{
    long int input,copy;
     long int i=1;
    
     long int d,a;
    long int b;
    
    scanf("%ld",&input);
    d=1;
    copy=input;
    b=input;
    while(copy!=0)
    {
        a=copy%10;
        if(a==4)
        input=input-d;
        d=d*10;
        copy=copy/10;
    }
    b=b-input;
    printf("Case #%d: %ld %ld",i++,input,b);
    
}