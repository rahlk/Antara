#include <stdio.h>
#define max 100
int main()
{
    int i,t,a[max],b[max],c[max];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<t;i++)
    {
        if(a[i]%10==4)
        {
            b[i]=a[i]-1;
            c[i]=1;
        }else if(a[i]%2==0)
        {
            b[i]=c[i]=a[i]/2;
            if(b[i]%10==4||c[i]%10==4)
            {
                b[i]++;
                c[i]--;
            }
        }else{
            b[i]=a[i]/2;
            c[i]=b[i]+1;
        }
    }
    
    for(i=0;i<t;i++)
    {
        printf("Case #%d: %d %d\n",i+1,b[i],c[i]);
    }
    
}