#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int t,test;
    scanf("%d",&t);
    test=t;
    while(t--)
    {   
        int n,p,a,i=0;
        scanf("%d",&n);
        p=n;a=n;
        do
        {
            if(p%10==4)
            {
                n -= pow(10,i);
            }
            p/=10;
            i++;
        }while(p);
        printf("Case #%d: %d %d\n",test-t,n,a-n);
    } 
}