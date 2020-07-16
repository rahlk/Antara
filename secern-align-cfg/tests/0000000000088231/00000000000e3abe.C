#include<stdio.h>
main()
 {
  int n,rev1=0,a=0,b=0,r,rev=0,count=0,count1=0;
  printf("Enter the value of N");
  scanf("%d",&n);
  if(n>4)
  {
   while(n!=0)
   {
    r=n%10;
    count++;
    if(r==4)
    {
      a=a*10+3;
      b=b*10+1;
    }
    else
    {
      a=a*10+r;
      b=b*10;
      
    }
    n=n/10;    
   }
   while(a!=0)
   {
       rev=rev*10;
       rev=rev+(a%10);
       a=a/10;
   }
   while(b!=0)
   {
       rev1=rev1*10;
       rev1=rev1+(b%10);
       count1++;
       
   }
   while(count!=count1)
   {
       rev1=rev1*10;
       count--;
   }
   printf("a=%d b=%d",rev,rev1);
  }
 }
   
     