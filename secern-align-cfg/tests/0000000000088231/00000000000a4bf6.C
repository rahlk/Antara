#include <stdio.h>

int main()
{
    int n,n1,n2,p;
    scanf("%d",&n);
    p=n/2;
    n1=n-p;
    n2=n-p;
    if(n1%4==0)
    {
        n1--;
        n2++;
        if(n2%4==0)
        {
            n2++;
            n1--;
        }
        
    }
    else if (n2%4==0)
    {
        n2--;
        n1++;
        if(n1%4==0)
        {
            n1++;
            n2--;
        }
    }
    else if (n1%4==0 && n2%4==0)
    {
        n1--;n2++;
    }
    printf("%d %d",n1,n2);
    return 0;
}
