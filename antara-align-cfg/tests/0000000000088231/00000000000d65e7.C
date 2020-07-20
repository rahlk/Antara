#include<stdio.h>
int check(float n){
    while(n>0)
    {
        float temp;
        temp=n%10;
        if((int)temp==4)
        {
            return -1;
        }
        else{
            return 1;
        }
        n=n/10;
    }
}
int main()
{
    int t,n;
    float a,b;
    while(t--)
    {
        scanf("%d",&n);
        a=n/2;
        b=n/2;
        if(check(n/2)==1)
        {
            printf("%d %d",a,b);
        }
        else if(check(n/2)==-1)
        {
        }
        
    }
}