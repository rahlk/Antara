#include<stdio.h>
int check(int n){
    while(n>0)
    {
        float temp;
        temp=n%10;
        if(temp==4)
        {
            return -1;
        }
        else{
            return 1;
        }
        n=n/10;
    }
}
int main()
{
    int t,n,a,b;
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;;i++)
        {
            a=rand();
            b=rand();
            if(check(a)&&check(b)==1)
            {
                if(a+b==n)
                {
                    printf("%d %d",a,b);
                    break;
                }
            }
        }
        
    }
}