#include<stdio.h>
#include<math.h>
void main()
{
    int t,x,x1,a,b,c;
    int temp=0;
    a=0;b=0;
    scanf("%d",&t);
    while(t!=0)
    {
        t--;
        c=0;
        scanf("%d",x);
        x1=x;
        while(x1!=0)
        {
            temp=x1%10;
            x1=x1/10;
            if(temp==4)
            {
                a=(int)a+3*pow(10,c);
                b=(int)b+1*pow(10,c);
            }
            else
            {
                a=(int)a+temp*pow(10,c);
            }
            c++;
        }
    }
    printf("Case #%d: %d %d",x,a,b);
}