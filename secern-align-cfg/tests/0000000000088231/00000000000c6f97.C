#include<stdio.h>
#include<stdlib.h>

main()
{
    int iin,in,a,b,n,check,i;
    scanf("%d",&in);
    for(iin=1;iin<=in;iin++)
    {
        scanf("%d",&n);
        a = n/2;
        b = n-n/2;
        check = 1;
        while(1)
        {
            //printf("%d %d\n",a,b);
            for(i=1;i<=n;i*=10)
            {
                if(a/i%10==4 || b/i%10==4) check=0;
            }
            if(check==0)
            {
                b += a/2;
                a -= a/2;
                check = 1;
            }
            else break;
        }
        printf("Case #%d: %d %d\n",iin,a,b);
    }
}
