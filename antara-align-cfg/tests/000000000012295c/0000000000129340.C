#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
long  i,j,T,P,Q,k=1;
long  m,n;
scanf("%d",&T);
if(T<=100)
{
while(k<=T)
{
m=0;
n=0;
scanf("%d %d",&P,&Q);
long  x[P],y[P];
char a[P];
for(i=0;i<P;i++)
{
scanf("%dl %d %c",&x[i],&y[i],&a[i]);
m=m+x[i];
n=n+y[i];
}
m=m/P;
n=n/P;
printf("Case #%d: %d %d",k,floor(m),floor(n));
k++;
}
}
}