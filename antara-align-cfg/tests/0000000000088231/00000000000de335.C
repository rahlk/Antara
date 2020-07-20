
#include<stdio.h>
#include<math.h>
void main()
{
 int t=0,i=0,m=0,j=0;
 long int n=0,h=1,b=0;
scanf("%d",&t);
scanf("%ld",&n);
 j=n;
while(n!=0)
{
    m=n%10;
    n=n/10;
    if(m==4)
    {
       
        h=h*pow(10,i);
        j=j-h;
        b=b+h; 
    }
    i++;
        
}
 printf("Case #%d: %ld %ld",t,j,b);
}




