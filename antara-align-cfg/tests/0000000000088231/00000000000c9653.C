#include<stdio.h>
#include<math.h>
int ifcontains(int);
int iffour(int);
int main()
{
    int t;
    scanf("%d",&t);
    int count=0;
    while(t--)
    {
        count=count+1;
        int n,k;
        scanf("%d",&n);
        k=n-(iffour(n));
          printf("Case #%d: %d %d\n",count,k,iffour(n)); 
    }
}
int iffour(int x)
{
    int i,r,count=0,sum=0;
    i=x;
    while(i>0)
    {
        r=i%10;
        if(r==4)
        {
            sum=sum+pow(10,count);
        }
        i=i/10;
        count++;
    }
    return sum;
}