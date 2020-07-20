#include<stdio.h>
#include<math.h>
void main()
{
int c,d;
long long int    a,b,i,j=0;
 int l;
printf("Enter the case\n");
scanf("%d",&c);
long long int x[c],k[c];
for(d=0;d<c;d++)
{

scanf("%lld",&x[d]);

}
for(d=0;d<c;d++)
{

k[d]=x[d];
        printf("Case #%d",d+1);
            while(x[d]>0)
   {
  x[d]=x[d]%10;
  x[d]=x[d]/10;
  j=j+1;
  l=j;
  if(x[d]==4)
  break;
  }
 a=k[d]-pow(10,l);
 b=k[d]-a;
 printf("  %lld   %lld\n",a,b);
 
}
}
 