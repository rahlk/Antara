#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int len=log(n)/log(10);
        int A[len];
        int sum1=0,sum2=0;
        for(int i=0;i<len;i++)
        {
            A[i]=n%10;
            if(A[i]==4)
            {
                A[i]=3;
                sum2+=(10^i);
            }        
            sum1+=A[i]*(10^i);
            n=n/10;
        }
        printf("%d %d\n",sum1,sum2);
    }
}