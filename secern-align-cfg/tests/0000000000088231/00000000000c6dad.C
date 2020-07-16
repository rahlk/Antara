#include<stdio.h)
int main(void)
{
    int t,a = 0;
    scanf("%d",&t);
    while(t--)
    {
        a++;
        long long int n,i = 0,j,b,c,d = 0;
        long long int e = 0, ar[10000000],count = 0;
        scanf("%d",&n);
        b = n;
        while(b != 0)
        {
             c = b % 10;
             b = b / 10;
             if(c == 4)
             {
                  ar[i] = 3;
                  i++;
                  count++;
                  
             }
             else
             {
                  ar[i] = c;
                  i++;
                  count++;
                  
             }
        }
        for(i = count - 1; i >= 0; i--)
        {
           d = ar[i];
           e = e * 10 + d;
        }
        n = n - e;
        printf("Case #%d : %d\t%d\n",a,n,e);
        
    }
}