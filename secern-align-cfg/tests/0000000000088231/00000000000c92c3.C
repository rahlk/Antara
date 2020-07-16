#include<stdio.h>
int main()
{int t,n,k;
scanf("%d",&t);k=1;
int l=n,a1=0,a2=0,rv=0,s=1,r;
while(k<=t)
{scanf("%d",&n);
printf("Case #%d:",k); l=n;a1=0;a2=0;rv=0;s=1;
while(l>0)
{r=l%10;
if(r==4)
r-=1;
rv=r*s+rv;
s=s*10;
l=l/10;
}
n=n-rv;
printf("%d %d",n,rv);
if(k!=t)
printf("\n");
}
}


