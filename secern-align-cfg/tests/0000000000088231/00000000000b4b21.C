#include<stdio.h>
#include<math.h>

int main()
{
  long long int t,n,i,j,p,q,c=0;
  scanf("%lld",&t);
  
  while(t--)
  {
      scanf("%lld",&n);
      i=0;
      j=0;
      p=n;
      while(p>0)
      {
          if(p%10==4)
          {
               i=i+pow(10,j);
          }
          p=p/10;
          j++;
      }
      c++;
      printf("Case #%lld: %lld %lld\n",c,n-i,i);
  }
  return 0;
}