#include<stdio.h>
int power(int x, unsigned int y) 
{ 
    int temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
} 
int main()
{
    int t,i;
    scanf("%d",&t);
    long int n,p,temp,b=0;
    int count=0;
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        b=0;
        count=0;
        for(temp=n;temp!=0;temp/=10)
        {
            count++;
            if(temp%10==4)
            {
                p=power(10,count-1);
                n=n-p;
                b=b+p;
            }
        }
        printf("Case #%d: %ld %ld\n",i+1,n,b);
    }
    return 0;
}