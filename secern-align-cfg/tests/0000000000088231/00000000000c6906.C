#include<stdio.h>
int main(void)
{
    int t, count=1;
    scanf("%d", &t);
    while(t--)
    {
        int n, m, x=0, y=0, c=1;
        scanf("%d", &n);
        int td=0;
        m=n;
        while(m)
        {
            m=m/10;
            td++;
        }
        m=n;
        int a[td];
        for(int i=0;i<td;i++)
        {
            if(n%10==4)
            {
                a[i]=3;
            }
            else
            {
                a[i]=n%10;
            }
            n/=10;
        }
        //for(int i=0;i<td;i++)
          //  printf("%d", a[i]);
        for (int i=0, j=1; i<td; ++i)
        {
            if(!a[i])
                x=x+j;
            else
                x=x+a[i]*j;
            j*=10;
        }
        //printf("%d", x);
        y=m-x;
        printf("case #%d: %d %d\n", c, x, y);
        c++;
    }
    return 0;
}
