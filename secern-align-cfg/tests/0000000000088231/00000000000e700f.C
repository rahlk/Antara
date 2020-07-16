# include <stdio.h>
# include <math.h>
int main()
{
    long int t, c, n, a, b, i, j;
    scanf("\n%ld",&t);
    for(i=0; i<t; i++)
    {
        scanf("\n%ld",&n);
        for(j=0,c=0; j!=0; j/=10)
        {
            if(j%10!=4)
                c++;
            else
                break;
        }
        c++;
        a=n%pow(10,c);
        b=n/pow(10,c);
        a-=2*pow(10,(c-1));
        b+=2*pow(10,(c-1));
        printf("\nCase #%ld: %ld %ld",(i+1),a,b);
    }
    return 0;
}