#include<stdio.h>
#include<math.h>
void main(){
    int c,a,b,n,t,next=0;
    scanf("%d",&t);
    while(t!=0)
    {
        t--;next++;
        scanf("%d",&n);
        c=0;a=0;b=0;
        while(n!=0)
        {
            if((n%10)==4)
            {
                a=3*pow(10,c)+a;
                b=pow(10,c)+b;
            }
            else
            {
                a=(n%10)*pow(10,c)+a;
            }
            c++;
            n=n/10;
        }
        printf("\nCase #%d: %d %d",next,a,b);
    }
}