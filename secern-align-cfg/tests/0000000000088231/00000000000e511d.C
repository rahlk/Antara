#include<stdio.h>
void main()
{
    int t,i,a=0,b=0,k,r;
    scanf("%d",&t);
    
    if(1<=t<=100)
    {
        int arr[t];
        int f[t][2];
        for(i=0;i<t;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<t;i++)
        {
            k=arr[i];
            while(k>0)
            {
                r=k%10;
                if(r==4)
                {
                    a=a*10+(r-1);
                }
                k=k/10;
            }
            b=arr[i]-a;
            f[i][0]=a;
            f[i][1]=b;
        }
        for(i=0;i<t;i++)
        {
            printf("Case #%d: %d %d\n",i,f[i][0],f[i][1]);

        }
    }
}