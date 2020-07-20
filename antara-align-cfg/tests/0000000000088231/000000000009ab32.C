#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int t;
    long long N;
    long long copy;
    int d=0;
    scanf("%d",&t);
    int i,j;
    for(j=1;j<=t;j++)
    {
        scanf("%lld",&N);
        copy=N;
        while(copy>0)
        {
            copy=copy/10;
            d++;
        }
        copy=N;
        int array[d];
        int a[d];
        int b[d];
        for(i=d-1;i>=0;i--)
        {
            if(copy/((long)pow(10,i))==4)
            {
                a[i]=2;
                b[i]=2;
            }
            else
            {
                a[i]=copy/((long)pow(10,i));
                b[i]=0;
            }
            copy=copy%((long)pow(10,i));
            if(copy==0)
            break;
        }
        printf("Case #%d: ",j);
        for(i=d-1;i>=0;i--)
        printf("%d",a[i]);
        printf("  ");
        for(i=d-1;i>=0;i--)
        printf("%d",b[i]);
        printf("\n");
        
    }
    
}