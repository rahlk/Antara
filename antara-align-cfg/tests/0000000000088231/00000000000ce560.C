#include<stdio.h>
int four_in(int n)
{
    int t,ne,rem;
    while(n)
    {
        rem=n%10;
        if (rem==4)
        return 1;
        n=n/10;
    }
    return 0;
}
int main()
{
    int t,n,i,j,k,c=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        j=1;
        k=n-1;
        while(j<=(n/2)&&k>=(n/2))
        {
        if(four_in(j)||four_in(k))
        break;
        else
        {
            printf("Case #%d: %d %d",i,j,k);
            c==1;
        }
        if(c==1)
        {
            break;
        }
        j++;
        k--;
        }
    }
}
            