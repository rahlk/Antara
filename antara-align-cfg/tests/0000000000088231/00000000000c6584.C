#include<stdio.h>
#include<conio.h>
void main()
{
    int t;
    long int n,a,b;
    scanf("%d",&t);
    for(int k=1;k<=n;k++)
    {
        scanf("%ld",&n);
        for(int i=0;i<(n/2);i++)
        {
            for(int j=n;j>(n/2);j--)
            {
                if(i+j==n)
                {
                    a=i;
                    b=j;
                    c=1;
                    break();
                }
            }
            if(c=1)
            break();
        }
        printf("Case#%d: %ld %ld",k,a,b);
    }
}