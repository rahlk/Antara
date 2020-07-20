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
}
for(d=1;d<=c;d++)
{
	j=0;

if(1<n[d]&&n[d]<pow(10,5)){   k[d]=n[d]; printf("Case #1");  
   {
    
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
 printf("The value of a & b is : %lld   %lld\n",a,b);
             }}
 else if(1<n[d]&&n[d]<pow(10,9)){   k[d]=n[d]; printf("Case #2");  
   {
    
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
 printf("The value of a & b is : %lld   %lld\n",a,b);
             }}
  else if(1<n[d]&&n[d]<pow(10,100)){  k[d]=n[d]; printf("Case #3"); 
   
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
 printf("The value of a & b is : %lld   %lld\n",a,b);
             }
  else{printf("Invalid input");}



}
}


 