#include<stdio.h>
#include<math.h>
int main()
{
  long int t;
  long long int n,a,b,x;
  scanf("%li",&t);
  int cs=0;
  while(t--)
  {
      
       long int count=0;
      scanf("%lli",&n);
      a=n,b=0;
      x=n;
      while(n!=0)
      {
          if(n%10==4)
        {
          a=a-2*pow(10,count);
        }
        n=n/10;
        ++count;
        

      }
     cs++;
      b=x-a;
      printf("case #%d: %lli %lli\n",cs,a,b);
  }
  return 0;
}
