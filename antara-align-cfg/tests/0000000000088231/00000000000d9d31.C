#include<stdio.h>
#include<math.h>
int part(int n)
{
    int temp,d,p1,a=0;
    temp = n;
    while(temp != 0)
    {
        d = temp%10;
        if(d == 4)
        {
            d-=1;
            p1 += d * pow(10,a);
        }
        temp = temp/10;
        a++;
    }
    return p1;
}

void main()
{
    int n,t,p1,p2,i=1;
    scanf("%d" ,&t);
    while(t>0)
    {
        scanf("%d" ,&n);
        p1 = part(n);
        p2 = n - p1;
        printf("Case #%d: %d %d" ,i,p1,p2);
        i++;
        t--;
    }
}