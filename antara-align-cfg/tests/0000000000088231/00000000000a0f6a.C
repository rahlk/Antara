#include<stdio.h>
#include<math.h>
int main()
{
    int a,b=0,input,i,count=0,temp,d,n;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&input);
        i=input;
        a=input;
        while(i!=0)
        {
            temp=i%10;
            if(temp==4)
            {
                d = pow(10,count);
                d = d*2;
                a = a - d;
                b = b + d;
            }
            count++;
            i=i/10;
        }
        printf("%d %d",a,b);
        n--;
    }
}
