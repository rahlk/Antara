#include<stdio.h>

int main(void)
{
    int t;
    int temp;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a=0;
        int b=0;
        int p=1;
        scanf("%d",&n);
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
            printf("Case #%d: %d %d\n",i+1,a,b);
        else
            printf("Case #%d: %d\n",i+1,a);
    }
}