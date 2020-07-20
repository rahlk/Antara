//gcc 5.4.0

#include  <stdio.h>

int main(void)
{
    long int n;
    int T;
    scanf("%d",&T);
    for(;T>0;T--) {
        long int a=0,b;
        scanf("%d",&n);
        long int t=n,ten=1;
        while(t>0) {
            if(t%10==4) {
                a=a+ten;
            }
            else {
                
            }
            ten=ten*10;
            t=(long int)t/10;
        }
        b=n-a;
        printf("%d %d",a ,b);
    }
}