#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
int i,j,T,P,Q,k=1;
int m,n;
scanf("%d",&T);
if(T>100) exit(1);
while(k<T)
{
m=0;
n=0;
scanf("%d %d",&P,&Q);
int x[P],y[P];
for(i=0;i<P;i++)
{
scanf("%d %d",&x[i],y[i]);
m=m+x[i];
n=n+y[i];
}
m=m/P;
n=n/P;
printf("Case #%d: %d %d",k,floor(m),floor(n));
k--;
}







}