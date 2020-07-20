#include<stdio.h>
int check(int n)
{
    int num=n,count=10;
    while(num>0)
    {
        if(num%10==4)
            return 0;
        num/=10;
    }
    return 1;
}
    
int main()
{
    int t;
    scanf("%d",&t);
    int st=t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int div1=num,div2=0;
        while(1)
        {
            if(check(div1) && check(div2))
            {
            printf("Case #1: %d %d",div1,div2);
            break;
            }
            div1=div1-1;
            div2=div2+1;
        }
    }
    return 0;
}
                
        