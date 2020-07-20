#include<stdio.h>
#include<math.h>
void main()
{
 int i=0,t,n,m,h=1,j,b=0;
scanf("%d",&t);
scanf("%d",&n);
 j=n;
while(n!=0)
{
    m=n%10;
    n=n/10;
    if(m==4)
    {
        for(int y=0;y<i;y++)
         h=h*10;
        j=j-h;

        b=b+h; 
    }
 i++;
}
 printf("Case #1: %d %d",j,b);
}


