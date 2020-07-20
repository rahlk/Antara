#include<stdio.h>
int main()
{
   long long int n,cas=1,a,b;
  int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&a);
        b=(3*a)/4;
        printf("Case #%lld: %lld %lld\n",cas++,b,a-b);

    }
    return 0;

}

