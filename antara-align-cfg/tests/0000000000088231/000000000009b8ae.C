#include<stdio.h>
main()
{
    int a,b,x,n;
    scanf("%d",&n);
    for(a=0;a<=n;a++)
    {
        for(b=0;b<=n;b++)
        {
            for(x=0;x<=100000;x++)
            {
                printf("case #%d",x);
            if((a+b)==n)
            {
                printf("%d %d",a,b);
            }
            }
        }
    }

}