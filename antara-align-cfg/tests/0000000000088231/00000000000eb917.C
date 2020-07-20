#include<stdio.h>
#include<conio.h>
void main()
{
 int t,j;

 printf("enter the number of case=");
 scanf("%ld",&t);
 for(j=1;j<=t;j++)
 {
    long int n,a=0,b=0,i=1,p;

     printf("\nthe value n=");
     scanf("%ld",&n);
 while(n>0)
{
  p=n%10;
  if(p==4)
  {
   a=a+(2*i);
   b=b+(2*i);
  }
  else
  {
   a=a+(p*i);
   b=b+0;
  }
  n=n/10;
  i=i*10;
}
   printf("the value of a=%ld",a);
   printf("the value of b=%ld",b);
 }
 

}
