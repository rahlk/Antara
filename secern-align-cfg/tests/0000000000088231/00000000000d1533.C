#include<stdio.h>


int main()
{
    int i,j,n,t,a,b,s=0,arr[1000],ae[1000],x;
    x=4;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(a=1;a<n;a++)
        {
            for(b=1;b<n;b++)
            {
                j=a+b;
                if(j==n&&a!=x&&b!=x)
                {
                    arr[s]=a;
                    ae[s]=b;
                    s++;
                    break;
                }
            }
            break;
        }
    }
    for(i=0;i<s;i++)
    {
        printf("%d %d\n",arr[i],ae[i]);
    }
    return 0;
}