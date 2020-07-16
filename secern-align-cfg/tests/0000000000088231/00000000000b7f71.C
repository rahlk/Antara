#include <stdio.h>
#include<math.h>
int main()
{
 int p,t;
 scanf("%d",&t);
 for(p=0;p<t;p++)
 {
     long long int n,j,b=0;
     int k,i;
     int a[100];
     scanf("%lld",&n);
     j=n;k=0;
     while(j!=0)
     {
       a[k++]=j%10;
       j=j/10;
     }
     for(i=0;i<k;i++)
     {
         if(a[i]==4)
         {
             a[i]=a[i]-1;
             b=b+pow(10,i);
         }
     }
     printf("Case #%d: ",p+1);
     for(i=k-1;i>=0;i--)
     printf("%d",a[i]);
     printf(" %d\n",b);
 }
	
	return 0;
}