#include <stdio.h>
#include<math.h>

int countn(long long int n)
{
    
    int count =0;
    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }
    return count;
}

int main(void) {
   long long int t;
   
   scanf("%lld", &t);
   
  for(int j=0;j<t;j++)
  
  {
       long long int sum1=0, sum2=0;
       
       long long int num;
       
       scanf("%lld", &num);
       
       int count = countn(num);
       
       
       for(int i = count; i>0; i--)
       {
           long long int div = (long long int)pow(10,i-1);
           
           int n = num/div;

           if(n%10==4)
           {
             sum1=num-div;
             sum2+=num-sum1;
             num=sum1;
           }
           
          
           
      }
       printf("Case #%d: %lld %lld\n",j+1, sum1, sum2);
     
  }
}