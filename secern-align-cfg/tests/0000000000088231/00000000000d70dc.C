#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long int i=0 ,n,j,m,h,j,b=0;
scanf("%d",&n);
int j=n;
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
 printf("%d %d",&j,&b);
}


