#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    int i=0;
    while(i!=t)
    {
        scanf("%d",&n);
        int rem,num=0,m=n,j=1;
        while(m!=0)
        {
            rem=m%10;
            if(rem==4)
                rem=1;
            else
                rem=0;
            num=num+rem*j;
            j=j*10;
            m=m/10;
        }
        printf("Case #%d: %d %d\n",(i+1),num,(n-num));
        i++;
    }
}