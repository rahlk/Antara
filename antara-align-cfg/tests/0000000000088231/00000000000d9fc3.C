#include <stdio.h>
#include<math.h>
void main()
{
  long long int t;
  scanf("%lld ",&t);
  while(t>0)
  {
    long long int n=0,b=0;
    scanf("%lld",&n);
    long long int arr[n];
    int i=0;
    while(n>0)
    {
      arr[i]=n%10;
      if(arr[i]==4)
      {
          arr[i]=arr[i]-1;
          b=pow(10,i)+b;
      }
      n=n/10;
      i=i+1;
    }
    int j;
    printf("Case #%lld: ",t);
    for(j=0;j<i;j++)
    {
        printf("%lld",arr[j]);
    }
    printf(" %lld",b);
    t=t-1;
  }
}
    