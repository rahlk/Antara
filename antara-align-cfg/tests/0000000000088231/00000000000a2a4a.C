#include <stdio.h>
int main()
{
    int t,i,j;
    long long int num;
    int a[20],b[20],n[20];
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%lld",&num);
        int k=0,a1=0,b1=0,p=1;
        while(num>0)
        {
            n[k]=num%10;
            k++;
            num/=10;
        }
        for(i=0;i<k;i++)
        {
            if(n[i]==4)
            {
                a[i]=3;
                b[i]=1;
            }
            else
            {
                a[i]=n[i];
                b[i]=0;
            }
            a[i]*=p;
            b[i]*=p;
            a1+=a[i];
            b1+=b[i];
            p*=10;
        }
        printf("Case #%d: %d %d\n",j,a1,b1);
    }
    
    return 0;
}
