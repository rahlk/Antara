#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int a=0,b=n;
        for(int j=1;j<=n;j++)
        {
            a++;
            b--;
            int c=a;
            int d=b;
            int f=0,h=0;
            while(c!=0)
            {
                int k=c%10;
                if(k==4)
                {
                    f=0;
                    break;
                }
                else
                f=1;
                c/=10;
            }
            while(d!=0)
            {
                int k=d%10;
                if(k==4)
                {
                   h=0;
                   break;
                }
                else
                h=1;
                d/=10;
            }
            if((a+b)==n&&(f==1&&h==1))
            break;
        }
        if(i==0)
        printf("Case#%d:%d %d",i,a,b);
        else
        printf("\nCase#%d:%d %d",i,a,b);
    }
}

        
            
        
            