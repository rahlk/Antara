#include<stdio.h>
#include<math.h>
void main()
{
int c;
long long int    a=0,b,i,j=0,d;

static long long int l;
scanf("%d",&c);
long long int n[c],k[c];
for(d=1;d<=c;d++)
{
scanf("%lld",&n[d]);
k[d]=n[d];
}
for(d=1;d<=c;d++)
{

j=0;
    while(n[d]>0)
   {
  i=n[d]%10;
  n[d]=n[d]/10;
   j=j+1;
  
  if(i==4)
  {
  	a=a+pow(10,l);
  }
  l=j;
 
  }
 
 b=k[d]-a;
 printf("Case #%d",d);
 printf("The value of a & b is : %lld   %lld\n",a,b);
            
    

}
}

 