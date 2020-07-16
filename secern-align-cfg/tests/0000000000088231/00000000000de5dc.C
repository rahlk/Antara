#include<stdio.h>

int main(void)
{
    int n;
    int a=0;
    int b=0;
    int p=1;
    int temp;
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
    printf("%d  %d\n",a,b);
}