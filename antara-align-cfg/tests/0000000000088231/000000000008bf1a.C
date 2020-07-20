#include<stdio.h>
int hasfour(int n)
{
    int r=0;
    while(n>0)
    {
        r=n%10;
        if(r==4)
        {
            return 1;
        }
        n=n/10;
    }
    return 0;
}
int main(){
    int i,t1=1,t,n,l,r;
    scanf("%d",&t);
    while(t1<=t)
    {
        scanf("%d",&n);
        l=n/2;
        r=n-l;
        while(l>0 && r<n)
        {
            if(hasfour(l)||hasfour(r))
            {
                l=l-1;
                r=r+1;
                continue;
            }
            else
            {
                printf("Case #%d: %d %d",t1,l,r);
                break;
            }
        }
        t1++;
        printf("\n");
    }
    return 0;
}
