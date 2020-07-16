#include<stdio.h>
int main()
{
    int n,i,t,A,B,b,f,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);

        for(j=1; j<n; j=2*j)
        {
            f=0;
            A=j;
            B=n-j;
            while(A)
            {
                b=A%10;
                A/= 10;
                if(b==4)
                {
                    f=1;
                    break;
                }
            }
            if(!f)
            {
                while(B)
                {
                    b=B%10;
                    B/= 10;
                    if(b==4)
                    {
                        f=1;
                        break;
                    }
                }
           }
            if(!f)
            {
                printf("Case #%d: %d %d\n",i,j,n-j);
                break;
            }
        }

    }
    return 0;
}
