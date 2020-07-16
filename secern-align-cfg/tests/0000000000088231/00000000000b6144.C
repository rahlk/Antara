#include<iostream>

int power(int);
int main()
{
    int t;
    while(t<1&&t>100)
    {
        scanf("%d",&t);
    }
    
    
     
    for(int i=1;i<=t;i++)
    {
        int n;
        long long int temp;
        long long int temp1;
        scanf("%d",&n);
        int pos = 0;
        temp = n;
        temp1 = n;
        
        while( temp!=0 )
        {
            if(temp%10 == 4)
            {
                temp1 -= power(pos);
                
            }
            temp /= 10;
            pos++;
        }
         printf("Case #%d: %d %d",i,temp1,n-temp1);
    }
    return 0;
}

int power(int exp)
{
    int result = 1;
    for(int i = 1;i<=exp;i++) result*=10;
    return result;
}