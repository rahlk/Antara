#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr_T;                       // pana aici merge doar pentru numere mai mici decat 10 la a 9
    scanf("%d",&nr_T);
    for(int q=1;q<=nr_T;q++)
    {
        int x;
        scanf("%d",&x);
        int a=0,b=0,power=1;
        while(x>0)
        {
            if(x%10==4)
            {
                b=power+b;
                a=power*3+a;
            }
            else
                a=power*(x%10)+a;
            power=power*10;
            x=x/10;
        }
        printf("Case #%d: %d %d\n",q,a,b);
    }
    return 0;
}
