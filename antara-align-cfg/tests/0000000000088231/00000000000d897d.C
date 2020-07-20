#include<math.h>
#include<stdio.h>
int main()
{
    int t,i=1,j;
    unsigned long long int A,T,R;
    scanf("%d",&t);
    while( i<=t )
    {
        j=0;R=0;
        scanf("%lld",&A);
        T = A;
        while ( T !=0 )
        {
            if ( T%10 == 4)
            {
                //printf("po %f",pow(10,j));
                //printf("R :%lld",R);
                R = R + (int)pow(10,j);
                //printf("  %lld   ",R);
                A = A - (int)pow(10,j);
                //printf("  A:%lld",A);
            }
            T=T/10;
            j++;
        }

        printf("\nCase #%d: %lld %lld ",i,A,R);
        i++;
    }
    return 0;
}
