#include<stdio.h>
int main()
{
int t,i,j;
    long long int n,a,b;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%Ld",&n);
        b=n;
        j=0;
        a=0;
        while(n>0)
        {   
            if(n%10==4)
            {
                a+=pow(10,j);
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
        printf("Case #%d: %Ld %Ld\n",i,a,b);
    }
    return(0);
}
            
        
    