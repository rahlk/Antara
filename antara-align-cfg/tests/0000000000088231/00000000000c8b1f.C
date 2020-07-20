#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,e,f=0,t;
    scanf("%d",&t);
    while(t--)
    {   c=0;
        d=0;
        e=0;
        f++;
        scanf("%d",&a);
        while(a)
        {
            b=a%10;
            a=a/10;
            if(b==4)
            {
                b=b-1;
                c=c+b*pow(10,e);
                d=d+1*pow(10,e);
                e++;
                
            }
            else
            {
                c=c+b*pow(10,e);
                e++;
            }
        }
        printf("Case #%d: %d %d\n",f,c,d);
    }
}
