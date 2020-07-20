#include<stdio.h>
int four_present(int i,int j)
{
    int d,p,check=1;
    p=i;
    while(p>0)
    {
        d=p%10;
        if(d==4)
        check=0;
        p=p/10;
    }
    if (check ==0)
    return(check);
    p=j;
    while(p>0)
    {
        d=p%10;
        if(d==4)
        check=0;
        p=p/10;
    }
    return(check);
}
void main()
{
    int t,n,k,i;
    scanf("%d",&t);
    while(t)
    {
        k=0;
        scanf("%d",&n);
        for(i=n/2;i>0;i--)
        {
                k=four_present(i,n-i);
                if(k==1)
                break;
        }
        printf("Case #%d: %d %d",t,i,n-i);
    }
}