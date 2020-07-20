#include<stdio.h>
int main()
{   int cases,n,n_a,n_b,digit,m;
    scanf("%d",&cases);
    for(int i=0;i<3;i++)
    {   n_a=0;
        scanf("%d",&n);
        m=10;
        while(n%m!=n)
        {
            digit=(n%m)/(m/10);
            if(digit==4)
            {
                n_a=n_a+(m/10);
            }
            m=10*m;
        }
         digit=(n%m)/(m/10);
            if(digit==4)
            {
                n_a=n_a+(m/10);
            }
            m=10*m;
        n_b=n-n_a;
        printf("Case #%d: %d %d\n",i+1,n_a,n_b);
        
    }
    return(0);
}