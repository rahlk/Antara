#include<stdio.h>
main()
{
    int t,n,a,b,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(a=1,b=n;a<=n,b>=1;a++,b--)
        {
            if(a==4)
                a++;
            if(b==4)
                b--;
            if(a+b=n)
                printf("Case #%d: %d %d",i,a,b);
        }
        
    }
}