#include<stdio.h>
int main()
 {  int n,a,b,c,d,count=0
   printf("enter the number of times jam win 1st person");
   scanf("%d",&a);
   printf("enter the number of times jam win 2nd person");
   scanf("%d",&b);
   while(a>=1)
    { c=(a%2);
      if(c=4)
      { printf("not winner");
      count++;
       break; }
       a=a/10;
    }
      while(b>=1)
    { c=(d%2);
      if(d=4)
      { printf("not winner");
      count++;
       break; }
       b=b/10;
    }
    if(count==0)
    { n=a+b;
    if(n==4)
    printf("both are winner");
    else if(a>b)
      printf(" a is winner");
      else  printf(" b is winner");
    return 0; }