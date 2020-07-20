#include<stdio.h>
int isDigitPresent(unsigned long long x, int d) 
{ 
    
    while (x > 0) 
    { 
        if (x % 10 == d) 
            break; 
  
        x = x / 10; 
    } 
  
    
    return (!(x > 0)); 
} 
int main()
{
  int t,j;
  scanf("%d",&t);
  for(j=1;j<=t;j++)
  {
    unsigned long long n,pick,i;
    scanf("%llu",&n);
    for(i=1;i<=(n+1)/2;i++)
     {
       if(isDigitPresent(i,4) && isDigitPresent(n-i,4))
       {
        pick=i;
        break;
       }
     }
     printf("Case #%d: %llu %llu\n",j,pick,(n-pick)); 
  }
   return 0;
}