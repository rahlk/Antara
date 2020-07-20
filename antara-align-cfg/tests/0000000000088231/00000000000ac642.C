#include <stdio.h>

int main()
{
  
   int n;
   int sus,b=1;
   scanf("%d",&sus);
   for(int i=0;i<sus;i++)
   {
    scanf("%d",&n);
    int t=n;
    int r;
    int i=1;
    int sum=0;
    while(n>0)
    
    {
        r=n%10;
        if(r==4)
        {
            sum=sum+i;
        }
        i=i*10;
        n=n/10;
    }
    //printf("%d",sum);
    int m=t-sum;
    
    printf("Case #%d:%d %d\n",b++,sum,m);
   }
    return 0;
}