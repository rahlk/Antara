#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int lenint(int N);
int digit(int N);
int main()
{
    int T,i,j,k;
    int N;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        int a,b;
        if(digit(N) == 1)
        {
            for(j=1; j<=N; j++)
            {
                for(k=N; k>=1; k--)
                {

                        a = j+1;
                        b = k+1;
                        if(a + b == N && digit(a) != 1 && digit(b) != 1)
                        {

                            printf("Case #%d: %d %d\n", i , a , b);
                            break;

                        }



                }
                if(a + b == N )
                    break;

            }

        }


    }
    return 0;
}

int lenint(int N)
{
    if (N >= 1000000000) return 10;
    if (N >= 100000000)  return 9;
    if (N >= 10000000)   return 8;
    if (N >= 1000000)    return 7;
    if (N >= 100000)     return 6;
    if (N >= 10000)      return 5;
    if (N >= 1000)       return 4;
    if (N >= 100)        return 3;
    if (N >= 10)         return 2;
    return 1;
}

int digit(int N)
{
    int len = lenint(N),c,a;
    int angka = N;
    for(int i=len; i>=1; i--)
    {
        c = pow (10,i-1);
         a = angka / c;
         if(a == 4)
         {
            return 1;
            break;
         }

         angka = N %  c;

    }
}

