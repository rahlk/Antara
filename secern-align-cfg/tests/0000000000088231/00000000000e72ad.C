# include <stdio.h>
# include <math.h>
int main()
{
    long int t, n, c=1, a, b, i, j;
    scanf("\n%ld",&t);
    for(i=0; i<t; i++)
    {
        scanf("\n%ld",&n);
        for(j=0,c=0; j!=0; j/=10)
        {
            if(j%10!=4)
                c*=10;
            else
                break;
        }
        c*=10;
        a=n%c;
        b=n/c;
        a-=2*(c/10);
        b+=2*(c/10);
        printf("\nCase #%ld: %ld %ld",(i+1),a,b);
    }
    return 0;
}