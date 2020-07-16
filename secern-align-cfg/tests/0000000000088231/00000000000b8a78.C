#include<stdio.h>
#include<math.h>
void main()
{
int c;
long long int    a=0,b,i,j=0,d;

static long long int l;
scanf("%d",&c);
long long int n1[c],n[c],k[c];
for(d=1;d<=c;d++)
{
	
scanf("%lld",&n1[d]);
if(d==1)
{
if(1<n1[d]&&n1[d]<pow(10,5)){ n[d]=n1[d];  k[d]=n[d];}
else{printf("It should between 1 & 10^5");}
continue;
}
if(d==2)
{
if(1<n1[d]&&n1[d]<pow(10,9)){ n[d]=n1[d];  k[d]=n[d];}
else{printf("It should between 1 & 10^5");}
continue;
}if(d==3)
{
if(1<n1[d]&&n1[d]<pow(10,100)){ n[d]=n1[d];  k[d]=n[d];}
else{printf("It should between 1 & 10^5");}
continue;
}

}

for(d=1;d<=c;d++)
{
if(n[d]==n1[d])
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
}

 