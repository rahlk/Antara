#include<stdio.h>

int main()
{
    long int b,n;
    
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%li",&n);
        b=0;
        long int d=10;
        while(n%d>0)
        {
            long int temp=n%d;
            if(temp/(d/10)==4)
            {
                b+=(d/10);
            }
            d*=10;
        }
        printf("Case #%d: %li %li",i+1,b,n-b);
    }
    return 0;
}