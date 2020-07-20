#include<stdio.h>
#include<math.h>
void main()
{
    int a=0;
    int b=0;
    
    scanf(%d,&a);
    for(i=0;i<a;i++)
    {
        int c=0;
        int d=0;
        int tmp=0;
        scanf(%d,&b);
        while(b<10)
        {
            if(b%10==4)
            {
                c=c+3*pow(10,tmp);
                d=d+pow(10,tmp);
                
            }
            else
            {
                c=c;
                d=d+b*pow(10,tmp)
            }
            tmp=tmp+1
        }
        printf(”Case #%d: %d %d”,c,d);
    }
}