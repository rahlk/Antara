#include<stdio.h>
int main()
{
    int i,n,t,k=0,z=0;
    scanf("%d",&t);
    while(k<t)
    {
        k++;
        scanf("%d",&n);
        int a=n/2;
        int b=n-a;
        for(i=a;i>0;i--)
        {
            int y=a;
            int x=b;
            while(y>0){
                int t;
                t=y%10;
                y=y/10;
                if(t==4)
                z=1;
            }
            while(x>0){
                int t;
                t=x%10;
                x=x/10;
                if(t==4)
                z=1;
            }
            if(z==0)
            {
                printf("%d %d",a,b);
                break();
            }
            a--;
            b++;
        }
    }
}