#include<stdio.h>
#include<math.h>

int main(){
    int t,i=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int a,n,sum=0,x=0,j=0;
        
        scanf("%lld",&n);
        a=n;
        while(n!=0)
        {
            x=n%10;
            
            if(x==4)
            {
            sum=sum+pow(10,j);
            }
            n=n/10;
            j++;
        }
        
        a=a-sum;
        printf("%lld %lld",a,sum);
        printf("\n");
    }
        return 0;
}