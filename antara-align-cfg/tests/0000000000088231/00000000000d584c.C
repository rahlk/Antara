#include<stdio.h>
#include<math.h>
void avi(long long int );
int main()
{
int c;
long long int    a=0,b,i,j=0,d,l,x;


scanf("%d",&c);
if(1<=c&&c<=100)
{
long long int n[c];
for(d=0;d<c;d++)
{
	
scanf("%lld",&n[d]);
}
 for(d=0;d<c;d++)
   {
if(1<n[d]&&n[d]<pow(10,5)){   x=n[d]; printf("Case #%d",d+1); avi(x);}
 else if(1<n[d]&&n[d]<pow(10,9)){   x=n[d]; printf("Case #%d",d+1); avi(x);}
  else{printf("Invalid input\n");}
}
}
return 0;
}

void  avi(long long int x)
{
 long long int n1=x,i,j=0,l,k,a=0,b;
  k=n1;
    while(n1>0)
   {
  i=n1%10;
  n1=n1/10;
 l=j;
  
  if(i==4)
  {
  	a=a+pow(10,l);
  }
   j=j+1;
  //l=j;
  }
 
 b=k-a;
 printf(" %lld   %lld\n",a,b);
}
            
    




