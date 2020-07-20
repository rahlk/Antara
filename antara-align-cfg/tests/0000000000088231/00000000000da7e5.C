#include<stdio.h>
int main()
{
    int t,i,j;
    long int n,a=0,b;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%ld",&n);
        b=n;
        j=0;
        while(n>0)
        {
            if(n%10==4)
            {
                a+=3*pow(10,j);
                n=n/10;
                j++;
            }
            else
            {
                n=n/10;
                j++;
            }
        }
        b=b-a;
        printf("Case #%d: %ld %ld\n",i,a,b);
    }
    return(0);
}
     
            
        
    