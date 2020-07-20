#include<stdio.h>
int four(int num)
{
    int power=1,ans =0,rem;
    while(num!=0)
    {
        rem = num%10;
        if(rem == 4)
        {
            ans = ans+(power*1);
        }
        power = power*10;
        num = num/10;
    }
    return ans;
}
int main()
{
    int n,temp=1,i,a,b;
    scanf("%d",&n);
    int ary[n];
    for(i=0;j<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    for(i=0;i<3;i++)
    {
        a = four(ary[i]);
        b = ary[i]-a;
        printf("Case #%d: %d %d\n",temp,a,b);
        temp++;
    }
    return 0;
}
