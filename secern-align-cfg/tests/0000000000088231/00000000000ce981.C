#include<stdio.h>
#include<stdlib.h>

main()
{
    int iin,in,a,b,n,check,i,j;
    scanf("%d",&in);
    for(iin=1;iin<=in;iin++)
    {
        scanf("%d",&n);
        a = 1;
        b = n-1;
        check = 1;
        for(i=1;i<=n/2;i++)
        {
            for(j=1;j<=100000;j++)
            {
                if(a/j%10==4 || b/j%10==4) check = 0;
            }
            if(check==0)
            {
                a++;
                b--;
                check = 1;
            }
            else break;
        }
        printf("Case #%d: %d %d\n",iin,a,b);
    }
}