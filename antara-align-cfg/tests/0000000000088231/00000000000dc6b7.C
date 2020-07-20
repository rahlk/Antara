#include<stdio.h>
#include<math.h>
void main()
{
 int i=0,t=0,n=0,m=0,h=1,j=0,b=0;
scanf("%d",&t);
for(int k=0;k<=t;k++)
{
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
 printf("Case #%d: %d %d",t,j,b);
}
}


