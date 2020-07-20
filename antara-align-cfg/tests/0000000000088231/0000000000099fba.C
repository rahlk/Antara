#include <stdio.h>

int main()
{
   int t=0, x=1, a=0, b=0;
   long double n=0, aux=0;
   int arr[10]={0};
   scanf("%d",&t);
   while(t){
       scanf("%lf",&n);
       printf("Case #%d: ",x);
       a=n/2;
       b=n/2;
       printf("%d %d",a,b);
       x++;
       t--;
   }
    
    
}