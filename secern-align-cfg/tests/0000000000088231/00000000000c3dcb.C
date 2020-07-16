#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,j,k,n,g;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        j=0;k=0;g=n;
        for(;n!=0;n/=10)
        {
            if(n%10==4)
            k+=pow(10,j);
            j++;
        }
        printf("Case #%d: %d %d\n",i+1,k,g-k);
    }
    
    return 0;
}