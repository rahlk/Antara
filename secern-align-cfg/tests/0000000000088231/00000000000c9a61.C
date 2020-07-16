#include<stdio.h>
#include<math.h>
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
int main()
{
    int t,n,k,i,j,temp,d,r,s;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        k=0;r=0;
        scanf("%d",&n);
        temp=n;
        while(temp>0)
        {
            d=temp%10;
            r=r+1;
            if(d==4)
            s=r;
            temp=temp/10;
        }
        for(i=n/2-pow(10,s-1);i>0;i--)
        {
                k=four_present(i,n-i);
                if(k==1)
                break;
        }
        printf("Case #%d: %d %d\n",j,i,n-i);
    }
    return 0;
}