#include<stdio.h>
#include<math.h>

int check(int n)
{
   int ok,aux,pos;
   aux = n;
   pos=0;
   ok = 1;
   while (ok && aux>0)
        if (aux % 10 == 4)
           ok = 0;
        else
        {
           aux = aux / 10;
           pos++;
        }
   return ok?-1:pos;
}

int main(void)
{
    int tests,testcase,a,b,n,la,lb;
    scanf("%i",&tests);
    for (testcase=1; testcase<=tests;testcase++)
    {
        scanf("%i",&n);
        a = n/2;
        b = n - a;
        while ((la=check(a))!=-1 || (lb=check(b))!=-1)
        {
            if (la>0)
            {
                a = a + pow(10,la);
                b = n-a;
            }
            else
            {
                b = b - pow(10,lb);
                a = n - a;
            }
        }
           
        printf("Case #%i: %i %i\n",testcase,a,b);
    }
}
