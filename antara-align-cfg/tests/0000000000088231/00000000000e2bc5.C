#include<stdio.h>

int main(void)
{
    int t;
    int temp;
    long n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long a=0;
        long b=0;
        int p=1;
        scanf("%ld",&n);
        while(n>0){
            temp=n%10;
            if(temp==4){
                a+=3*p;
                b+=1*p;
            }
            else{
                a+=temp*p;
            }
            n/=10;
            p*=10;
        }
        if(b!=0)
            printf("Case #%d: %ld %ld\n",i+1,a,b);
        else
            printf("Case #%d: %ld\n",i+1,a);
    }
}