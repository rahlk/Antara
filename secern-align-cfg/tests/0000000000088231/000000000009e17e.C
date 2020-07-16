#include<stdio.h>
int main()
{
    int v=1,t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m;
        scanf("%lld",&n);
        int i=0,l;
        m=n;
        while(n>0)
        {
            i++;
            n=n/10;
        }
        int a[i],b[i],j=0,k=0;
        for(l=0;l<i;l++)
        b[l]=0;
        while(m>0)
        {
            if(m%10==4)
            {
            a[j]=m%10-1;
            b[j]=1;
            k=j;
            }
            else
            a[j]=m%10;
            j++;
            
            m=m/10;
        }
        printf("Case #%d: ",v);
        i--;
        j=i;
        while(i>=0)
        {
        printf("%d",a[i]);
        i--;
        }
        printf(" ");
        
        while(k>=0)
        {
        printf("%d",b[k]);
        k--;
        }
        printf("\n");
        v++;
        
    }
    
    
    
    
    
    
    
    
    return 0;
}