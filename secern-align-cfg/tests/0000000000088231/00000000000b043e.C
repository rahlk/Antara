#include<stdio.h>
#include<math.h>

int main(){
    int t,i=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,n,x=0,j=0,sum=0;
        scanf("%d",&n);
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
        printf("%d %d",a,sum);
    }
        return 0;
}