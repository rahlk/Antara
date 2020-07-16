#include<stdio.h>
#include<math.h>
void main()
{
 int i=0,t,n,m,h,j,b=0;
scanf("%d",&t);
scanf("%d",&n);
 j=n;
while(n!=0)
{
    m=n%10;
    n=n/10;
    if(m==4)
    {
        h=1*pow(10,i);
        j=j-h;

        b=b+h; 
    }
 i++;
}
 printf("Case #1: %d %d",&j,&b);
}


