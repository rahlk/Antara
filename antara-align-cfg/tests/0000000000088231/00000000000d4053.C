#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int T,i,D,j,r;
    scanf("%d",&T);
    unsigned long long int n,sum=0,duplicate;
    for(i=1;i<=T;i++){
        scanf("%llu",&n);
        
        duplicate=n;
        Digit=floor(log10(abs(n)))+1;
        for(j=1;j<=Digits;j++){
            r=duplicate%10;
            if(r==4)
               sum=sum+(int)round(pow(10,j-1));
               duplicate=duplucate/10;
        }
        
        printf("Case #%d:"%llu%llu\n",i,sum,n-sum);
        sum=0;
        
    }
}