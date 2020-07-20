#include<stdio.h>
int main()
{
   int n,cas=1,a,b;
  int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        b=(3*a)/4;
        printf("Case #%d: %d %d\n",cas++,b,a-b);

    }
    return 0;

}
