
#include <stdio.h>
#include<math.h>

void main()
{
    int a,b,i,t,d,c,j=0;
    scanf("%d",&t);
    
while(t--)
{
    j++;
    i=0;
    d=0;
    c=0;
    
scanf("%d",&b);
while(b!=0)
{
    a=b%10;
    b=b/10;
    
    if(a==4)
    {
        a=a-1;
        d=d+a*pow(10,i);
        c=c+1*pow(10,i);
        i++;
    }
    else
    {
    d=d+a*pow(10,i);
    i++;
    }
}
printf("Case #%d:%d %d\n",j,d,c);
}   
    
}
