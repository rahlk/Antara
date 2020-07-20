#include<stdio.h>

int main()
{
    int t,i=1;scanf("%d",&t);
    while(t--)
    {
        int num1=0,num2=0,digit,copy,n;scanf("%d",&n);
        copy=n;
        while(copy>0)
        {
            digit=copy%10;
            copy/=10;
            if(digit==4)
            {
                num1+=3;
                num2+=1;
            }if(copy!=0){num1*=10;num2*=10;}
        }
        printf("Case #%d: %d %d\n",i++,num1,num2);
    }
    return 0;
}