#include<stdio.h>
struct number{
    int x;
    int y;
};
int check(int n)
{
    if(n==4)
        return 1;
        int k;
    while(n>0)
    {
        k=n%10;
        if(k==4)
            return 1;
        n=n/10;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int n;
       int x,y;
        scanf("%d",&n);
        struct number l[n];
        int p=0,flag=0;
        for(int i=1;i<=n;i++)
        {
            if(check(i))
                continue;
            for(int j=n;j>0;j--)
            {
                if(check(j))
                    continue;
                //if(i+j>n)
                 //   break;
                if(i+j==n)
                {
                    printf("%d %d",i,j);
                    flag=1;
                    break;
                    l[p].x=i;
                    l[p].y=j;
                    p++;
                }
            }
            if(flag==1)
            break;
        } 
       // printf("result is:\n");
        /*for(int i=0;i<p;i++)
        {
                printf("%d %d\n",l[i].x,l[i].y);
        }*/
        /*for(int i=0;i<p;i++)
        {
            //if(l[i].x==l[i].y)
            {
                fflush(stdout);
                printf("%d %d\n",l[i].x,l[i].y);
                flag=1;
                //break;
            }
        }*/
       /* if(flag!=1)
        {
            fflush(stdout);
            printf("%d %d\n",l[0].x,l[0].y);
        }*/
    }
    
}