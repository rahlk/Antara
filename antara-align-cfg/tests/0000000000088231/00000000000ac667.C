#include<stdio.h>
int check(int,int);
int checkfour(int);
int main()
{
    int t,n,a,b,w=1;
    scanf("%d",&t);
    while(w<=t)
    {
        a=1;
        scanf("%d",&n);
        while(a<=n)
        {
            b=n-a;
            if(check(a,b)==2)
            {
            printf("Case #%d: %d %d\n",w,a,b);
            break;
            }
            else a++;
        }
        w++;
    }
    return 0;
}
    int check(int a,int b)
    {
        int flag=0;
        if(checkfour(a)==1)
        flag=1;
        else if(checkfour(b)==1)
        flag=1;
        if(flag==1)
        return 1;
        else
        return 2;
    }
    int checkfour(int a)
    {
        int flag=0,p;
        while(a)
        {
            p=a%10;
            a=a/10;
            if(p==4)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        return 1;
        else
        return 2;
    }